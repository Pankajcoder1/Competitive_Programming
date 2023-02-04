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
    vector<int> separateDigits(vector<int> &nums)
    {
        vector<int> ans;
        for(auto x:nums)
        {
            vector<int> temp;
            while(x>0)
            {
                temp.push_back(x%10);
                x/=10;
            }
            reverse(temp.begin(),temp.end());
            for(auto y:temp)
                ans.push_back(y);
        }
        return ans;
    }
};