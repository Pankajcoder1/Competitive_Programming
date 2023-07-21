/*
    written by Pankaj Kumar.
    country:-INDIA
*/
typedef long long ll ;
const ll INF=1e18;
const ll mod1=1e9+7;
const ll mod2=998244353;
//Add main code here

#include <vector>

class Solution
{
public:
    int findNumberOfLIS(vector<int> &nums)
    {
        int n = nums.size();
        if (n <= 1)
        {
            return n;
        }

        vector<int> dp(n, 1);    // dp[i] represents the length of the LIS ending at nums[i]
        vector<int> count(n, 1); // count[i] represents the number of LIS ending at nums[i]
        int maxLen = 1;

        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (nums[i] > nums[j])
                {
                    if (dp[i] < dp[j] + 1)
                    {
                        dp[i] = dp[j] + 1;
                        count[i] = count[j]; // Update the count of LIS
                    }
                    else if (dp[i] == dp[j] + 1)
                    {
                        count[i] += count[j]; // Accumulate the count of LIS
                    }
                }
            }
            maxLen = max(maxLen, dp[i]);
        }

        int result = 0;
        for (int i = 0; i < n; i++)
        {
            if (dp[i] == maxLen)
            {
                result += count[i]; // Accumulate the count of LIS with maximum length
            }
        }

        return result;
    }
};
