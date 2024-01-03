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
    int minCost(string colors, vector<int> &neededTime)
    {
        int ans = 0;
        for(int i=0;i<colors.size();i++){
            int sum = 0;
            priority_queue<int> pq;
            int j = i;
            while (j < colors.size() && colors[j] == colors[i])
            {
                sum += neededTime[j];
                pq.push(neededTime[j]);
                j++;
            }
            i = j - 1;
            ans += (sum - pq.top());
        }
        return ans;
    }
};