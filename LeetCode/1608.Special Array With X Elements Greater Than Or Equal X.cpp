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
    int specialArray(vector<int> &nums)
    {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0; i <= n; i++)
        {
            auto it = lower_bound(nums.begin(), nums.end(), i);
            int pos = nums.end() - it;
            if (pos == i)
            {
                return i;
            }
        }
        return -1;
    }
};