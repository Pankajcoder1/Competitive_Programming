class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxo=nums[0],mini=nums[0];
        int ans=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            int temp=nums[i];
            int temp_max=temp*maxo;
            int temp_min=temp*mini;
            maxo=max({temp,temp_min,temp_max});
            mini=min({temp,temp_min,temp_max});
            ans=max(ans,maxo);
        }
        return ans;
    }
};