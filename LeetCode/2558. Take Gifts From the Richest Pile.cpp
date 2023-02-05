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
    long long pickGifts(vector<int> &gifts, int k)
    {
        priority_queue<int> pq(gifts.begin(), gifts.end());
        while (k--)
        {
            int x2 = pq.top();
            pq.pop();
            int x = sqrt(x2);
            pq.push(x);
        }
        long long ans = 0;
        while (pq.size())
        {
            ans += pq.top();
            pq.pop();
        }
        return ans;
    }
};