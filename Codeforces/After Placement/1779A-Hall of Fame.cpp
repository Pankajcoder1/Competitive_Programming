/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int solve(){
    int n;
    string s;
    cin>>n>>s;
    int r=0,l=0;
    bool flag=false;
    int pos=0;
    for(int i=0;i<n;i++){
        if(i+1<n && s[i]=='L' and s[i+1]=='R'){
            pos=i+1;
        }
        if(s[i]=='L'){
            l++;
            if (r)
            {
                flag = true;
            }
        }
        else{
            r++;
            
        }
    }
    if(flag==true){
        cout<<0<<endl;
    }
    else{
        if(l==0 || r==0){
            cout<<-1<<endl;
        }
        else{
            cout<<pos<<endl;
        }
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