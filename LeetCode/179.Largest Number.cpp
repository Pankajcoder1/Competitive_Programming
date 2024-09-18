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
    
    string largestNumber(vector<int> &nums)
    {
        vector<string> s(nums.size(),"");
        string ans="";

        for(int i=0;i<nums.size();i++){
            s[i]=to_string(nums[i]);
        }
        sort(s.begin(),s.end(),[](const string &a, const string &b){
            return a+b>b+a;
        });
        if(s[0]=="0"){
            ans="0";
        }
        else{
            for(auto x:s){
                ans+=x;
            }
        }
        return ans;
    }
};
