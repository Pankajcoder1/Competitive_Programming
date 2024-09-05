/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int solve(){
    int x,y,k;
    cin>>x>>y>>k;
    int ans=0;
    ans+=2*max((x+k-1)/k,(y+k-1)/k);
    if ((x + k - 1) / k > (y + k - 1) / k)
    {
        ans--;
    }
    cout<<ans<<endl;
    return 0;
}
int main()
{
    int testCase=1;
    cin>>testCase;
    while(testCase--){
        solve();
    }
    return 0;
}