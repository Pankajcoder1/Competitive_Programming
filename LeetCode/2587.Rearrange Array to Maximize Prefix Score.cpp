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
    int maxScore(vector<int> &nums)
    {
        sort(nums.rbegin(), nums.rend());
        int ans = 0;
        long long sum = 0;
        for (auto v : nums)
        {
            sum += v;
            if (sum > 0)
                ans++;
        }
        return ans;
    }
};