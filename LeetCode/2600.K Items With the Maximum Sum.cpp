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
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k)
    {
        int ans=0;
        if (numOnes >= k)
        {
            return k;
        }
        else{
            ans = numOnes;
            k -= numOnes;
            if(numZeros>=k){
                return ans;
            }
            else{
                k-=numZeros;
                ans-=k;
                return ans;
            }
        }
    }
};