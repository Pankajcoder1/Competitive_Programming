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
    int largestAltitude(vector<int> &gain)
    {
        int maxo=0,sum=0;
        for(auto x:gain){
            sum+=x;
            maxo=max(maxo,sum);
        }
        return maxo;
    }
};