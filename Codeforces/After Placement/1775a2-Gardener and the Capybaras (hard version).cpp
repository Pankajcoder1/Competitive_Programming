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
    int pos=-1;
    for(int i=1;i<=n-2;i++){
        if(s[i]=='a'){
            pos=i;
            break;
        }
    }
    // cout<<"pos="<<pos<<endl;
    if(pos!=-1){
        cout<<s.substr(0,pos)<<" "<<s[pos]<<" "<<s.substr(pos+1,n-1)<<endl;
    }
    else{
        cout<<s[0]<<" "<<s.substr(1,n-2)<<" "<<s[n-1]<<endl;
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