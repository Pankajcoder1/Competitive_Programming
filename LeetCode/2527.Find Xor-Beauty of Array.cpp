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
    int xorBeauty(vector<int> &nums)
    {
        int ans=0;
        for(auto x:nums){
            ans^=x;
        }
        return ans;
    }
};