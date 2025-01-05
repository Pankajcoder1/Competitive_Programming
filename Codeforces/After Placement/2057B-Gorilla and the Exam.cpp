/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int solve(){
    int n,k,temp;
    cin>>n>>k;
    map<int, int> m;

    for(int i=0;i<n;i++){
        cin>>temp;
        m[temp]++;
    }
    vector<int> v;
    for(auto x:m){
        v.push_back(x.second);
    }
    sort(v.begin(),v.end());
    int ans=v.size();
    // cout<<"ans "<<ans<<endl;

    if(k==0){
        cout<<ans<<endl;
        return 0;
    }

    for(int i=0;i<v.size();i++){
        k-=v[i];
        if(k<0){
            break;
        }
        ans--;
    }
    cout<<max(ans,1)<<endl;
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