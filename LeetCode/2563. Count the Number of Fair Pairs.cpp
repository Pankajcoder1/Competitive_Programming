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
    long long countFairPairs(vector<int> &nums, int lower, int upper)
    {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        long long ans=0;
        for(int i=0;i<n;i++){
            long long first=i+1,second=n-1;
            // cout<<"i is "<<i<<endl;
            long long temp1=INT_MAX,temp2=INT_MAX;
            while(second>=first){
                long long mid=first+(second-first)/2;
                if((nums[mid]+nums[i])>=lower){
                    // cout<<"sum is "<<nums[mid]+nums[i]<<" and mid is "<<mid<<endl;
                    temp1=mid;
                    second=mid-1;
                }
                else{
                    first=mid+1;
                }
            }
            if(temp1==INT_MAX){
                continue;
            }
            first=temp1,second=n-1;
            while(second>=first){
                long long mid=first+(second-first)/2;
                if(nums[mid]+nums[i]<=upper){
                    temp2=mid;
                    first=mid+1;
                }
                else{
                    second=mid-1;
                }
            }
            if (temp2 == INT_MAX)
            {
                continue;
            }
            // cout<<"temp1 is "<<temp1<<" temp2 is "<<temp2<<endl;
            ans+=temp2-temp1+1;            
        }
        return ans;
    }
};