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
    int numberOfBeams(vector<string> &bank)
    {
        int ans = 0;
        int previous = 0;
        for (int i = 0; i < bank.size(); i++)
        {
            int count = 0;
            for (int j = 0; j < bank[i].size(); j++)
            {
                if (bank[i][j] == '1')
                {
                    count++;
                }
            }
            if (count)
            {
                ans += previous * count;
                previous = count;
            }
        }
        return ans;
    }
};
