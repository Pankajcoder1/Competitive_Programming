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
    vector<int> rearrangeArray(vector<int> &nums)
    {
        int pos = 0, neg = 1;
        int n = nums.size();
        assert(n % 2 == 0);
        vector<int> ans(n, 0);
        for (auto x : nums)
        {
            if (x > 0)
            {
                ans[pos] = x;
                pos += 2;
            }
            else
            {
                ans[neg] = x;
                neg += 2;
            }
        }
        return ans;
    }
};