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
    int minImpossibleOR(vector<int> &nums)
    {
        set<int> S;
        for (auto &&i : nums)
        {
            S.emplace(i);
        }
        int ans = 1;
        while (S.count(ans))
            ans *= 2;
        return ans;
    }
};