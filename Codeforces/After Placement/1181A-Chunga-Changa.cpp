/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int solve()
{
    long long x,y,z;
    cin >> x >> y >> z;
    if(x%z+y%z<z)
        cout<<(x+y)/z<<" "<<0<<endl;
    else
        cout<<(x+y)/z<<" "<<min(z-x%z,z-y%z)<<endl;
    return 0;
}
int main()
{
    int testCase = 1;
    while (testCase--)
    {
        solve();
    }
    return 0;
}