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
    vector<int> getAverages(vector<int> &nums, int k)
    {
        int n = nums.size();
        vector<int> ans(n, -1);
        long long sum = 0;
        if (n < 2 * k)
        {
            return ans;
        }
        for (int i = 0; i < 2 * k; i++)
        {
            sum += nums[i];
        }
        for (int i = 2 * k; i < n; i++)
        {
            sum += nums[i];
            int average = (sum) / (2 * k + 1);
            ans[i - k] = average;
            sum -= nums[i - 2 * k];
        }
        return ans;
    }
};