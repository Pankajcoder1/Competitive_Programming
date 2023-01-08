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
    int maximumCount(vector<int> &nums)
    {
        int pos=0,neg=0,maxo=0;
        for(auto x:nums){
            if(x>0){
                pos++;
            }
            else if(x<0){
                neg++;
            }
            maxo=max({maxo,pos,neg});
        }
        return maxo;
    }
};