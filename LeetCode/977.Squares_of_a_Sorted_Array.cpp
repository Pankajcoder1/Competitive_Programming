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
    vector<int> sortedSquares(vector<int> &nums)
    {
        int n=nums.size();
        vector<int> ans(n);
        int first=0,second = n-1;
        for(int i=n-1;i>=0;i--){
            if(abs(nums[first])>=abs(nums[second])){
                ans[i]=nums[first]*nums[first];
                first++;
            }
            else{
                ans[i]=nums[second]*nums[second];
                second--;
            }
        }
        return ans;
    }
};