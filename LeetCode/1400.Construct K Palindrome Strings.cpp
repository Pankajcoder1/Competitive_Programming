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
    bool canConstruct(string s, int k)
    {
        vector<int> v(26,0);
        int n = s.size();
        for (auto x : s)
        {
            v[x-'a']++;
        }
        int odd = 0, even = 0;
        for (auto x : v)
        {
            odd += (x % 2);
            even += (x / 2);
        }
        k-=odd;
        return k>=0 && k<=2*even;
    }
};
