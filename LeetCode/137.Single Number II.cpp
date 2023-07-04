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
    int singleNumber(vector<int> &nums)
    {
        vector<int> bitCount(32, 0);
        // bitCount[i] = no. of elements in nums array having ith bit set
        for (auto val : nums)
        {
            for (int i = 0; i < 32; i++)
            {
                if ((val & (1 << i)) != 0)
                {
                    bitCount[i] ++;
                }
            }
        }
        int ans = 0;
        for (int i = 0; i < 32; i++)
        {
            if (bitCount[i] % 3 != 0)
            {
                ans = (ans + (1 << i));
            }
        }
        return ans;
    }
};