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
    int distMoney(int money, int children)
    {
        int child=0;
        bool flag=0;
        if(money<children){
            return -1;
        }
        money-=children;
        for(int i=1;i<children;i++){
            if(money>=7){
                child++;
                money-=7;
            }
            else{
                return child;
            }
        }
        if(money==3){
            if(child>0){
                child--;
            }
            else{
                return -1;
            }
        }
        else if(money==7){
            child++;
        }

        return child;
    }
};