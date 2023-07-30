/*
    written by Pankaj Kumar.
    country:-INDIA
*/
typedef long long ll;
const ll INF = 1e18;
const ll mod1 = 1e9 + 7;
const ll mod2 = 998244353;
// Add main code here
class Solution
{
public:
    int countCompleteSubarrays(vector<int> &nums)
    {
        set<int> s;
        for (int num : nums)
        {
            s.insert(num);
        }
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            set<int> temp;
            for (int j = i; j < nums.size(); j++)
            {
                temp.insert(nums[j]);
                count += temp.size() == s.size();
            }
        }
        return count;
    }
};