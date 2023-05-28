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
    long long maxStrength(vector<int> &nums)
    {
        long long ans = nums[0];
        for (int i = 1; i < (1 << nums.size()); i += 1)
        {
            long long pans = 1;
            for (int j = 0; j < nums.size(); j += 1)
            {
                if ((i >> j) & 1)
                {
                    pans = pans * nums[j];
                }
            }
            ans = max(ans, pans);
        }
        return ans;
    }
};