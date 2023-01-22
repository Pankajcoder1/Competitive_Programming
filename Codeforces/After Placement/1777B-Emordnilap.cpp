/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
long long mod=1e9+7;

long long factorial(int n){
    long long ans=1;
    for(int i=1;i<=n;i++){
        ans*=i;
        ans%=mod;
    }
    return ans;
}


int solve(){
    int n;
    cin>>n;
    long long ans=(long long)n*(n-1);
    ans%=mod;
    ans=(ans*factorial(n))%mod;
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