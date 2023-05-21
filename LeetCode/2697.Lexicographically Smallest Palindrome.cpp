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
    string makeSmallestPalindrome(string s)
    {
        int n=s.size();
        for(int i=0;i<n/2;i++){
            char ch=min(s[i],s[n-1-i]);
            s[i]=ch;
            s[n-1-i]=ch;
        }
        return s;
    }
};