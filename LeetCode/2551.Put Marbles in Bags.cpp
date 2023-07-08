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
    long long putMarbles(vector<int> &weights, int k)
    {
        vector<long long> store;
        for (int i = 1; i < weights.size(); i++)
        {
            store.push_back(weights[i] + weights[i - 1]);
        }
        sort(store.begin(), store.end());
        int n = store.size();
        long long mini = 0;
        for (int i = 0; i < k - 1; i++)
        {
            mini += store[i];
        }

        long long maxi = 0;
        for (int i = 0; i < k - 1; i++)
        {
            maxi += store[n - 1 - i];
        }
        return maxi - mini;
    }
};