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
    int longestSubsequence(vector<int> &arr, int difference)
    {
        int longest = 0;
        unordered_map<int, int> dp; // Map to store the length of subsequence ending at each element

        for (int num : arr)
        {
            dp[num] = dp[num - difference] + 1; // Increment the length by 1

            longest = max(longest, dp[num]); // Update the longest length
        }

        return longest;
    }
};
