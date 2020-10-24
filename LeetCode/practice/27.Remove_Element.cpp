class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int pos=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=val)
            {
                nums[pos++]=nums[i];
            }
        }
        return pos;
    }
};