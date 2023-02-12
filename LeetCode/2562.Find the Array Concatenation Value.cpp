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
    long long to_number(string s)
    {
        long long ans=0;
        for(int i=0;i<s.size();i++){
            ans=ans*10+(s[i]-'0');
        }
        return ans;
    }

    long long findTheArrayConcVal(vector<int> &nums)
    {
        int n=nums.size();
        long long ans=0;
        if(n%2==0){
            for (int i = 0; i < n / 2; i++)
            {
                ans += to_number(to_string(nums[i]) + to_string(nums[n - i - 1]));
            }
        }
        else{
            for (int i = 0; i < n / 2; i++)
            {
                ans += to_number(to_string(nums[i]) + to_string(nums[n - i - 1]));
            }
            ans+=nums[n/2];
        }
        return ans;
    }
};