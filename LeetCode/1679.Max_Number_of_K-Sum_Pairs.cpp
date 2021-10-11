class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        map<int,int> m;
        int count=0;
        for(auto x:nums)
        {
            if(m[k-x]>0)
            {
                m[k-x]--;
                count++;
            }
            else
                m[x]++;
        }
        return count;
    }
};