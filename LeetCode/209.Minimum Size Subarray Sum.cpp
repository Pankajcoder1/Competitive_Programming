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
    int minSubArrayLen(int target, vector<int> &nums)
    {
        int n = nums.size();
        int minLength = INT_MAX;
        int left = 0;
        int sum = 0;

        for (int right = 0; right < n; right++)
        {
            sum += nums[right];

            while (sum >= target)
            {
                minLength = min(minLength, right - left + 1);
                sum -= nums[left];
                left++;
            }
        }

        return (minLength != INT_MAX) ? minLength : 0;
    }
};
