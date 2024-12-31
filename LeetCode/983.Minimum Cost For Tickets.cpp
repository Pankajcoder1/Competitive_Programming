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
    int mincostTickets(vector<int> &days, vector<int> &costs)
    {
        vector<int> dp(366, 0);
        
        for(int i=days[0];i<=365;i++){
            if(find(days.begin(),days.end(),i)==days.end()){
                dp[i]=dp[i-1];
                continue;
            }
            else{
                dp[i]=min({dp[i-1]+costs[0],dp[max(0,i-7)]+costs[1],dp[max(0,i-30)]+costs[2]});
            }
        }
        return dp[days.back()];
    }
};
