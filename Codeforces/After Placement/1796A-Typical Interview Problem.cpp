/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int solve(){
    string s = "FBFFBFFBFBFFBFFBFBFFBFFB";
    int n;
    string temp;
    cin>>n>>temp;
    for(int i=0;i+n<s.size();i++){
        bool flag=true;
        for(int j=0;j<n;j++){
            if(s[i+j]!=temp[j]){
                flag=false;
                break;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
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