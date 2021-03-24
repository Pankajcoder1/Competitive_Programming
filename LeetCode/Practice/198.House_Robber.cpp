class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n+1,0);
        if(n==0)
            return 0;
        else if(n==1)
            return nums[0];
        else if(n==2)
            return max(nums[0],nums[1]);
        else
        {
            dp[0]=nums[0];
            dp[1]=max(nums[0],nums[1]);
            for(int i=2;i<n;i++)
                dp[i]=max(dp[i-1],(dp[i-2]+nums[i]));
            
            return dp[n-1];
        }
        
    }
};