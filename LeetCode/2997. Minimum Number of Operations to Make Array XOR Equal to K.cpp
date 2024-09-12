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
    int minOperations(vector<int> &nums, int k)
    {
        int ans=0;
        int all_xor=nums[0];
        for(int i=1;i<nums.size();i++){
            all_xor^=nums[i];
        }
        for(int i=0;i<32;i++){
            int temp1=k&(1<<i);
            int temp2=all_xor&(1<<i);
            // check if temp1==0 and temp2!=0 or temp1!=0 && temp2==0
            if(temp1^temp2){
                ans++;
            }
        }
        return ans;
    }
};