/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int solve(){
    int k,n;
    cin>>n>>k;
    for(int i=n-k;i<=n;i++){
        cout<<i<<" ";
    }
    for(int i=n-k-1;i>0;i--){
        cout<<i<<" ";
    }
    cout<<endl;
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