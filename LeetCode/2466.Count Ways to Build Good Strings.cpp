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
    int countGoodStrings(int low, int high, int zero, int one)
    {
        vector<int> v(high+1,0);
        v[0]=1; // for empty string
        for(int i=1;i<=high;i++){
            if(i-zero>=0){
                v[i]+=v[i-zero];
                v[i]%=mod1;
            }
            if(i-one>=0){
                v[i]+=v[i-one];
                v[i]%=mod1;
            }
        }
        ll ans=0;
        for(int i=low;i<=high;i++){
            ans+=v[i];
            ans%=mod1;
        }
        return ans;
    }
};
