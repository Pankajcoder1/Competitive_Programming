/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int solve(){
    string s;
    cin>>s;
    int n=s.size();
    int ans=1;
    if(s[0]=='?'){
        ans=9;
    }
    else if(s[0]=='0'){
        cout<<0<<endl;
        return 0;
    }
    for(int i=1;i<n;i++){
        if(s[i]=='?'){
            ans*=10;
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