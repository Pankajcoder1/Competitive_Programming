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
    vector<vector<int>> findMatrix(vector<int> &nums)
    {
        map<int, int> mp;
        for (int x : nums){
            ++mp[x];
        }
        int maxo = 0;
        for (auto &[element, freq] : mp){
            maxo = max(maxo, freq);
        }
        vector<vector<int>> a(maxo);
        for (auto &[element, freq] : mp)
        {
            for (int i = 0; i < freq; i++)
            {
                a[i].push_back(element);
            }
        }
        return a;
    }
};