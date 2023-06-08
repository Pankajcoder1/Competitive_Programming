/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int solve(){
    int n,k,q;
    cin>>n>>k>>q;
    vector<long long> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    long long count=0,maxo=0,ans=0;
    for(int i=0;i<n;i++){
        if(max(maxo,v[i])<=q){
            count++;
            maxo=max(maxo,v[i]);
        }
        else{
            if(count>=k){
                long long temp1=count-k+1;
                long long temp2=(temp1*(temp1+1))/2;
                ans+=temp2;
            }
            count=0,maxo=0;
            if(v[i]<=q){
                maxo=v[i];
                count=1;
            }
        }
    }
    if(count>=k){
        long long temp1 = count - k+1;
        long long temp2 = (temp1 * (temp1 + 1)) / 2;
        ans += temp2;
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