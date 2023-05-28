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
    bool check(int i){
        string s=to_string(i*i);
        
    }
    int punishmentNumber(int n)
    {
        int sum=0;
        for(int i=1;i<=n;i++){
            if(check(i)){
                sum+=(i*i);
            }
        }
        return sum;
    }
};
