/*
    written by Pankaj Kumar.
    country:-INDIA
*/
typedef long long ll;
const ll INF = 1e18;
const ll mod1 = 1e9 + 7;
const ll mod2 = 998244353;
// Add main code here

class Solution
{
public:
    int longestArithSeqLength(vector<int> &nums)
    {
        int n = nums.size();
        if (n <= 2)
        {
            return n;
        }

        // Create a vector of unordered maps
        vector<unordered_map<int, int>> dp(n);

        int maxLength = 2;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                int diff = nums[i] - nums[j];

                // If the difference exists in the subsequence ending at index j
                // Extend the subsequence and update the length in dp[i]
                if (dp[j].find(diff) != dp[j].end())
                {
                    dp[i][diff] = dp[j][diff] + 1;
                }
                else
                {
                    // If the difference doesn't exist, initialize it to 2
                    dp[i][diff] = 2;
                }

                maxLength = max(maxLength, dp[i][diff]);
            }
        }

        return maxLength;
    }
};