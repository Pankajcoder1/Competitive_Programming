/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int solve(){
    long long a,b,x,y;
    cin>>a>>b>>x>>y;
    long long hcf=__gcd(x,y);
    x/=hcf;
    y/=hcf;
    cout<<min({a/x,b/y})<<endl;
    return 0;
}
int main()
{
    int testCase=1;
    while(testCase--){
        solve();
    }
    return 0;
}