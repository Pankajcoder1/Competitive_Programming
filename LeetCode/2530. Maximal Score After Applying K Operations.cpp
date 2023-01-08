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
    long long maxKelements(vector<int> &nums, int k)
    {
        // max heap
        priority_queue<int> pq;
        for (int i = 0; i < nums.size(); i++)
        {
            pq.push(nums[i]);
        }
        long long ans = 0;
        while(k--){
            int temp=pq.top();
            pq.pop();
            ans+=temp;
            pq.push((temp+2)/3);
        }
        return ans;
    }
};