class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int temp=0,maxo=INT_MIN;
        for(auto x:nums)
        {
            temp+=x;
            if(maxo<temp)
            {
                maxo=temp;
            }
            if(temp<0)
            {
                temp=0;
            }
        }
        return maxo;
    }
};