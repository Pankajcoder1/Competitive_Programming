/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    vector<long long> prefix(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(i==0){
            prefix[i]=v[i];
        }
        else{
            prefix[i]=prefix[i-1]+v[i];
        }
    }
    long long ans=0;
    for(int i=1;i<n;i++){
        ans=max(ans,__gcd(prefix[i-1],prefix[n-1]-prefix[i-1]));
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