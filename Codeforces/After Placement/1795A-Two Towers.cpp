/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int solve(){
    int n,m;
    cin>>n>>m;
    string s1="", s2="";
    string temp="";
    bool flag=true;
    cin>>s1>>s2;
    for(int i=0;i+1<n;i++){
        if(s1[i]==s1[i+1]){
            temp=s1.substr(i+1,n);
            // cout<<"temp is "<<temp<<endl;
            flag=false;
            break;
        }
    }
    if(!flag){
        reverse(temp.begin(),temp.end());
        s2+=temp;
        for(int i=0;i+1<s2.size();i++){
            if(s2[i]==s2[i+1]){
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    temp="";
    flag=true;
    for(int i=0;i+1<m;i++){
        if(s2[i]==s2[i+1]){
            temp=s2.substr(i+1,m);
            flag=false;
            break;
        }
    }
    if(!flag){
        reverse(temp.begin(),temp.end());
        s1+=temp;
        for(int i=0;i+1<s1.size();i++){
            if(s1[i]==s1[i+1]){
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    cout<<"YES"<<endl;
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
