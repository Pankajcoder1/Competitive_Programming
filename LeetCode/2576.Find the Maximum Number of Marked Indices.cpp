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
    int maxNumOfMarkedIndices(vector<int> &v)
    {
        sort(v.begin(), v.end());
        int i = 0, n = v.size(), j = n / 2, cnt = 0;
        while (i < n / 2 && j < n)
        {
            if (v[i] * 2 <= v[j])
            {
                i++;
                j++;
                cnt += 2;
            }
            else
                j++;
        }
        return cnt;
    }
};