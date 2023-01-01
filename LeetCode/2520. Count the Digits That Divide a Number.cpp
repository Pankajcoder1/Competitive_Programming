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
    int countDigits(int num)
    {
        int count=0;
        int temp=num;
        while(temp){
            int d=temp%10;
            if(!(num%d)){
                count++;
            }
            temp/=10;
        }
        return count;
    }
};