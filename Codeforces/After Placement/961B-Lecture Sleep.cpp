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
    vector<pair<int,int>> v(n);
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>v[i].first;
    }
    for(int i=0;i<n;i++){
        cin>>v[i].second;
    }
    for(int i=0;i<n;i++){
        if(v[i].second==1){
            sum+=v[i].first;
        }
    }
    long long maxo=0,temp=0;
    for(int i=0;i<k;i++){
        if(v[i].second==0){
            temp+=v[i].first;
        }
    }
    maxo=temp;
    for(int i=k;i<n;i++){
        if(v[i].second==0){
            temp+=v[i].first;
        }
        if(v[i-k].second==0){
            temp-=v[i-k].first;
        }
        maxo=max(maxo,temp);
    }
    cout<<maxo+sum<<endl;
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