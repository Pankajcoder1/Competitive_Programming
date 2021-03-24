class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v(2,0);
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums.size();j++)
            {
                if(i!=j&&(nums[i]+nums[j])==target)
                {
                    v[0]=i;
                    v[1]=j;
                    break;
                }
            }
        }
        return v;
    }
};