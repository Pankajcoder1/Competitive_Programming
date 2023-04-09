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
    bool prime(int num){
        if(num<=1){
            return false;
        }
        for(int i=2;i<=(int)sqrt(num);i++){
            if(num%i==0){
                return false;
            }
        }
        return true;
    }

    int diagonalPrime(vector<vector<int>> &nums)
    {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            if(prime(nums[i][i])){
                ans=max(ans,nums[i][i]);
            }
            if(prime(nums[i][n-1-i])){
                ans=max(ans,nums[i][n-1-i]);
            }
        }
        return ans;

    }
};