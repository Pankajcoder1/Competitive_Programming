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
    int maxProfit(vector<int> &prices)
    {
        if (prices.size() < 2)
            return 0;
        int mini = prices[0];
        int n = prices.size();
        int maxo = 0;
        for (int i = 1; i < n; i++)
        {
            int diff = prices[i] - mini;
            maxo = max(diff, maxo);
            mini = min(mini, prices[i]);
        }
        return maxo;
    }
};