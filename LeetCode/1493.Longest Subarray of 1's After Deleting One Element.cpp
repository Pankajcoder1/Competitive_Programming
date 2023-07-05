/*
    written by Pankaj Kumar.
    country:-INDIA
*/
typedef long long ll ;
const ll INF=1e18;
const ll mod1=1e9+7;
const ll mod2=998244353;
//Add main code here

// using vector

class Solution
{
public:
    int longestSubarray(vector<int> &nums)
    {
        int n = nums.size();
        vector<pair<int, int>> subarrays; // Vector to store subarray positions
        int start = -1;
        int end = -1;

        // Find the positions of all subarrays of 1
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 1)
            {
                if (start == -1)
                    start = i;
                end = i;
            }
            else
            {
                if (start != -1)
                {
                    subarrays.push_back({start, end});
                    start = -1;
                    end = -1;
                }
            }
        }

        // Edge case: If all elements are 1, return length - 1
        if (start != -1)
            subarrays.push_back({start, end});

        int ans = 0;
        int m = subarrays.size();

        // Calculate the longest subarray length
        for (int i = 0; i < m; i++)
        {
            ans = max(ans, subarrays[i].second - subarrays[i].first + 1);

            if (i > 0 && subarrays[i].first == subarrays[i - 1].second + 2)
                ans = max(ans, subarrays[i].second - subarrays[i - 1].first);
        }
        if(ans==n){
            ans--;
        }
        return ans;
    }
};
// sliding window approach

// class Solution
// {
// public:
//     int longestSubarray(vector<int> &nums)
//     {
//         nums.insert(nums.begin(), 0);
//         int sum = 0, ans = 0;
//         for (unsigned i = 0, j = 0; j < nums.size(); j++)
//         {
//             if (nums[j] == 1)
//             {
//                 sum += 1;
//             }
//             else
//             {
//                 sum = j - i - 1;
//                 i = j;
//             }
//             ans = max(ans, sum);
//         }
//         return ans;
//     }
// };
