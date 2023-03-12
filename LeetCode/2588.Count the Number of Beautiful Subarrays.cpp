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
    long long beautifulSubarrays(vector<int> &nums)
    {
        map<int, int> seen;
        seen[0]++;
        long long ans = 0;
        int sum = 0;
        for (int v : nums)
        {
            sum ^= v;
            ans += seen[sum];
            seen[sum]++;
        }
        return ans;
    }
};