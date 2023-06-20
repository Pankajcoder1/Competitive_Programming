/*
    written by Pankaj Kumar.
    country:-INDIA
*/
typedef long long ll ;
const ll INF=1e18;
const ll mod1=1e9+7;
const ll mod2=998244353;
//Add main code here

class Solution
{
public:
    int findValueOfPartition(vector<int> &nums)
    {
        int mini=INT_MAX;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            mini=min(mini,nums[i]-nums[i-1]);
        }
        return mini;
    }
};