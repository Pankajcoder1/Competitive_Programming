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
    int findLongestChain(vector<vector<int>> &pairs)
    {
        sort(pairs.begin(), pairs.end());
        int m = pairs.size(), cnt = 1, prev = pairs[0][1];
        for (int i = 1; i < m; i++)
        {
            if (prev < pairs[i][0])
            {
                cnt++;
                prev = pairs[i][1];
            }
            else if (prev > pairs[i][1]){
                prev = pairs[i][1];
            }
        }
        return cnt;
    }
};