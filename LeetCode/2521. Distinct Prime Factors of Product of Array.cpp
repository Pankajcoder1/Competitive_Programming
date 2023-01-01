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
    int distinctPrimeFactors(vector<int> &nums)
    {
        
        vector<int> check(10001,0);
        vector<int> prime;
        set<int> s;

        for(int i=2;i<=10000;i++){
            if (check[i] == 0)
            {
                prime.push_back(i);
                for(int j=i;j<=10000;j+=i){
                    check[j]++;
                }
            }
        }
        // size of prime is 1229
        
        for(auto x:nums){
            for(auto y:prime){
                if(x%y==0){
                    s.insert(y);
                }
            }

        }
        return s.size();
    }
};