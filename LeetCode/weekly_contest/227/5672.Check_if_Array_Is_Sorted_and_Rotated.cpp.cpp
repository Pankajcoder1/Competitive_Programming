class Solution {
public:
    bool check(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            if(is_sorted(nums.begin(),nums.end()))
                return true;
            else
            {
                rotate(nums.begin(),nums.begin()+1,nums.end());
            }
        }
        if(is_sorted(nums.begin(),nums.end()))
                return true;
        else
            return false;
        
    }
};