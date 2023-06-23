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
    for(auto &x:v){
        cin>>x;
    }
    sort(v.begin(),v.end());
    int ans=0;
    for(int i=0;i<n/2;i++){
        ans+=(v[n-1-i]-v[i]);
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
