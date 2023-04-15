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
    vector<long long> findPrefixScore(vector<int> &nums)
    {
        vector<long long> ans;
        long long maxo=0;
        for(int i=0;i<nums.size();i++){
            if(i==0){
                maxo=nums[i];
                ans.push_back(nums[i]*2);
            }
            else{
                maxo=max(maxo,(long long)nums[i]);
                ans.push_back(ans.back()+(nums[i]+maxo));
            }
        }
        return ans;
    }
};