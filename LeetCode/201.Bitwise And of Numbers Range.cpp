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
    int rangeBitwiseAnd(int left, int right)
    {
        vector<int> bits(32, 0);
        long long ans = 0;
        for (int i = 0; i < 32; i++)
        {
            if (left & (1 << i))
            {
                bits[i]++;
            }
            if (right & (1 << i))
            {
                bits[i]++;
            }
        }
        for (int i = 31; i >= 0; i--)
        {
            if (bits[i] & 1)
            {
                break;
            }
            else if (bits[i] == 2)
            {
                ans += (long long)((1 << i));
            }
        }
        return ans;
    }
};
