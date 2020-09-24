class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        vector<int> v(2,0);
        int i=0,j=nums.size()-1;
        while(j>i)
        {
            int temp=nums[i]+nums[j];
            if(temp>target)
            {
                j--;
            }
            else if(temp<target)
            {
                i++;
            }
            else if(temp==target)
            {
                v[0]=i+1;
                v[1]=j+1;
                break;
            }
            
        }
        return v;
    }
};