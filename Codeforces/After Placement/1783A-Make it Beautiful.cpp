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
    map<int,int> m;
    for(int i=0;i<n;i++){
        cin>>v[i];
        m[v[i]]++;
    }
    if(m.size()==1){
        cout<<"NO"<<endl;
    }
    else{
        vector<int> ans1,ans2;
        for(auto x:m){
            ans1.push_back(x.first);
            for(int i=2;i<=x.second;i++){
                ans2.push_back(x.first);
            }
        }
        reverse(ans1.begin(),ans1.end());
        cout<<"YES"<<endl;
        for(auto x:ans1){
            cout<<x<<" ";
        }
        for(auto x:ans2){
            cout<<x<<" ";
        }
        cout<<endl;
    }
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