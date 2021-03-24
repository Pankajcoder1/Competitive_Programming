class NumArray {
public:
    vector<int>dp;
    NumArray(vector<int>& nums) {
        int sum=0;
        dp.push_back(0);
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            dp.push_back(sum);
        }
    }
    
    int sumRange(int i, int j) {
        return (dp[j+1]-dp[i]);
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */