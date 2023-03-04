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
    long long coloredCells(int n)
    {
        long long N=n;
        return (long long)(N*(N-1))*2+1;
    }
};