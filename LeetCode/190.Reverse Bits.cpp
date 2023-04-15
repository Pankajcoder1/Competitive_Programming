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
    uint32_t reverseBits(uint32_t n)
    {
        uint32_t x = 0;
        int d = 0;
        while (n > 0)
        {
            x += (n % 2) << (31 - d);
            n >>= 1;
            d++;
        }
        return x;
    }
};