/*
    written by Pankaj Kumar.
    country:-INDIA
*/
typedef long long ll ;
const ll INF=1e18;
const ll mod1=1e9+7;
const ll mod2=998244353;
//Add main code here

typedef pair<long long, long long> pi;

class Solution
{
public:
    long long findScore(vector<int> &nums)
    {
        long long ans=0;
        int n=nums.size();

        // min heap
        priority_queue<pi, vector<pi>, greater<pi>> pq;
        vector<bool> check(nums.size(), false);
        
        for(int i=0;i<n;i++){
            pq.push({nums[i],i});
        }
        while(pq.size()){
            long long mini=pq.top().first;
            long long pos=pq.top().second;
            if(check[pos]==false){
                ans+=mini;
                if(pos+1<n){
                    check[pos+1]=true;
                }
                if(pos>=1){
                    check[pos-1]=true;
                }
            }
            pq.pop();
        }
        return ans;
    }
};