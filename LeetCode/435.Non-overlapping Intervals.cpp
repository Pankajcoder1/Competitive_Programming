/*
    written by Pankaj Kumar.
    country:-INDIA
*/
typedef long long ll ;
const ll INF=1e18;
const ll mod1=1e9+7;
const ll mod2=998244353;
//Add main code here

class Solution
{
public:
    int eraseOverlapIntervals(vector<vector<int>> &intervals)
    {
        int n = intervals.size();
        sort(intervals.begin(), intervals.end());
        int ans = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (intervals[i][1] > intervals[i + 1][0])
            {
                ans++;
                intervals[i + 1][1] = min(intervals[i][1], intervals[i + 1][1]);
            }
        }
        return ans;
    }
};