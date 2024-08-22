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
    int minimumLength(string str)
    {
        int s = 0, e = str.size() - 1;
        while (s < e)
        {
            if (str[s] == str[e])
            {
                while (str[s] == str[s + 1] && s < e)
                    s++;
                while (str[e] == str[e - 1] && s < e)
                    e--;
                s++;
                e--;
            }
            else
                break;
        }
        int ans = e - s + 1;
        if (ans < 0)
            return 0;
        return ans;
    }
};
