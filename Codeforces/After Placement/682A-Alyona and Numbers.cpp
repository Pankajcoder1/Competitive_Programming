/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int solve(){
    long long n,m;
    cin>>n>>m;
    long long ans=0;
    for(int i=1;i<=n;i++){
        long long temp=i%5;
        temp=(m+temp)/5;
        ans+=temp;
    }
    cout<<ans<<endl;
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