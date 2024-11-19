/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int solve(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,x,ans=0,sum=0,temp;
    cin>>n>>x;
    map<ll,ll> um;
    
    // for empty subarray
    um[0]=1;

    vector<int> v(n);
    for(auto &x:v){
        cin>>x;
    }

    for(int i=0;i<n;i++){
        sum+=v[i];
        ans+=um[sum-x];
        um[sum]++;
    }
    cout<<ans<<endl;
    return 0;
}
int main()
{
    int testCase=1;
    // cin>>testCase;
    while(testCase--){
        solve();
    }
    return 0;
}