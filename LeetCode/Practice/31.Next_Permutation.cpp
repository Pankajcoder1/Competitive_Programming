class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        next_permutation(nums.begin(),nums.end());
        for(auto x:nums)
            cout<<x<<" ";
        cout<<endl;
    }
};