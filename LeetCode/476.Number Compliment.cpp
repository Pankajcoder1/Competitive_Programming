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
    int findComplement(int n)
    {
        if (n == 0)
            return 1;
        vector<int> bit(32, 0);
        int ans = 0;
        int pos = 0;
        while (n)
        {
            if (n & 1)
            {
                bit[pos] = 1;
            }
            n >>= 1;
            pos++;
        }
        for (ll i = 0; i < pos; i++)
        {
            ans += (1 - bit[i]) * pow(2, i);
        }
        return ans;
    }
};
