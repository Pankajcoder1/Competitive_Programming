#include <vector>
#include <algorithm>
#include <queue>

class Solution
{
public:
    vector<int> findRightInterval(vector<vector<int>> &intervals)
    {
        int n = intervals.size();
        vector<int> result(n, -1); // Result vector to store the right interval index

        // Create a pair to store the start of each interval and its index
        vector<pair<int, int>> startIndices;
        for (int i = 0; i < n; i++)
        {
            startIndices.emplace_back(intervals[i][0], i);
        }

        // Sort the startIndices based on the start position
        sort(startIndices.begin(), startIndices.end());

        for (int i = 0; i < n; i++)
        {
            int currentEnd = intervals[i][1];
            int left = 0;
            int right = n - 1;
            int rightIntervalIndex = -1;

            // Use binary search to find the rightmost interval whose start is greater than or equal to the current end
            while (left <= right)
            {
                int mid = left + (right - left) / 2;

                if (startIndices[mid].first >= currentEnd)
                {
                    rightIntervalIndex = startIndices[mid].second;
                    right = mid - 1;
                }
                else
                {
                    left = mid + 1;
                }
            }

            result[i] = rightIntervalIndex;
        }

        return result;
    }
};
