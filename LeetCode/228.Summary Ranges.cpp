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
    vector<string> summaryRanges(vector<int> &nums)
    {
        int n=nums.size();
        vector<string> ans;
        if(n==0){
            return ans;
        }
        else if(n==1){
            ans.push_back(to_string(nums[0]));
            return ans;
        }
        int a=nums[0],b=nums[0];
        int count=1;
        for(int i=1;i<n;i++){
            if(nums[i]==(nums[i-1]+1)){
                b=nums[i];
                count++;
            }
            else{
                string temp="";
                if(count==1){
                    temp=to_string(a);
                }
                else{
                    temp=to_string(a)+"->"+to_string(b);
                }
                ans.push_back(temp);
                a=nums[i];
                b=nums[i];
                count=1;
            }
        }
        string temp = "";
        if (count == 1)
        {
            temp = to_string(a);
        }
        else
        {
            temp = to_string(a) + "->" + to_string(b);
        }
        ans.push_back(temp);
        return ans;
    }
};