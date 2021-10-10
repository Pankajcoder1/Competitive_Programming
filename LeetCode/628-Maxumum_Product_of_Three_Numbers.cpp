class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end(),greater<int>());
        int ans=1;
        ans=(nums[0]*nums[1]*nums[2]);
        int temp=nums[n-1]*nums[n-2]*nums[0];
        ans=max(ans,temp);
        return ans;
    }
};