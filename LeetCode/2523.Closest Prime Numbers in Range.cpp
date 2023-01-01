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
    vector<int> closestPrimes(int left, int right)
    {
        vector<int> check(1e6+1,0);
        vector<int> prime;
        for(int i=2;i<=1e6;i++){
            if(check[i]==0){
                prime.push_back(i);
                for(int j=i;j<=1e6;j+=i){
                    check[j]++;
                }
            }
        }
        // size of prime is 78498
        int mini=INT_MAX;
        int a=-1,b=-1;
        for(int i=0;i+1<prime.size();i++){
            if(prime[i]>=left && prime[i+1]<=right){
                if(prime[i+1]-prime[i]<mini){
                    mini=prime[i+1]-prime[i];
                    a=prime[i];
                    b=prime[i+1];
                }
            }
        }
        return {a,b};
    }
};