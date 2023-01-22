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
    bool makeStringsEqual(string s, string target)
    {
        int one1=0,one2=0;
        one1=count(s.begin(),s.end(),'1');
        one2=count(target.begin(),target.end(),'1');
        if(one1==0 || one2==0){
            return s==target;
        }
        else{
            return true;
        }
    }
};