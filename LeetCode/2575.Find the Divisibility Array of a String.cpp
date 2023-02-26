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
    vector<int> divisibilityArray(string word, int m)
    {
        vector<int> ans;
        long val = 0;
        for (auto &c : word)
        {
            val = (10 * val + (c - '0')) % m;
            if (val == 0)
                ans.push_back(1);
            else
                ans.push_back(0);
        }
        return ans;
    }
};