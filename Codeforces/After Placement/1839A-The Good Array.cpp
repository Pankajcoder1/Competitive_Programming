/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int solve(){
    int n,k;
    cin>>n>>k;
    vector<int> v1(n,0),v2(n,0);
    for(int i=0;i<n;i+=k){
        v1[i]++;
    }
    for(int i=n-1;i>=0;i-=k){
        v2[i]++;
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(v1[i]>0 || v2[i]>0){
            count++;
        }
        int req=(i+k)/k;
        if(count>req&&v1[i]>0){
            v1[i]=0;
        }
    }
    int ans=0;
    for(int i=0;i<n;i++){
        if(v1[i]>0 || v2[i]>0){
            ans++;
        }
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
