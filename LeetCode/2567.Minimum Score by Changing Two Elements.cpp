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
    int minimizeSum(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int ans = min(nums[n - 1] - nums[2], nums[n - 3] - nums[0]);
        ans = min(ans, nums[n - 2] - nums[1]);

        return ans;
    }
};