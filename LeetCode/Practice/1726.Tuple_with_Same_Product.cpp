class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        map<int,int> m;
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                ans+=(m[nums[i]*nums[j]]);
                m[nums[i]*nums[j]]++;
            }
        }
        return ans*8;
    }
};