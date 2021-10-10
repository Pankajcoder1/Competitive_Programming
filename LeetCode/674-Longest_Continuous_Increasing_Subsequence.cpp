class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int count=0,maxo=1;
        int n=nums.size();
        if(n==1)
            return 1;
        if(n==0)
            return 0;
        count=1;
        int temp=nums[0];
        for(int i=1;i<n;i++)
        {
            if(nums[i]>temp)
                count++;
            else
                count=1;
            maxo=max(maxo,count);
            temp=nums[i];
        }
        return maxo;
    }
};