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
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
    {
        vector<bool> ans;
        int maxo=0;
        for(auto x:candies){
            maxo=max(maxo,x);
        }
        for(auto x:candies){
            if(x+extraCandies>=maxo){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
        }
        return ans;
    }
};