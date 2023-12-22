/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int solve(){
    int n,ans=0;
    string s;
    cin>>n>>s;
    vector<int> v(27,0);
    for(auto x:s){
        v[x-'A'+1]++;
    }
    for(int i=1;i<=26;i++){
        if(v[i]>=i){
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