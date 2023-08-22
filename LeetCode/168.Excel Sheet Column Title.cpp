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
    string convertToTitle(int columnNumber)
    {
        string ans="";
        while (columnNumber)
        {
            columnNumber--;
            ans = ans + (char)((columnNumber) % 26 + 'A');
            columnNumber = columnNumber / 26;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};