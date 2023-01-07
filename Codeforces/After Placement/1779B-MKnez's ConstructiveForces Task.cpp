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
    if(n&1){
        if(n==3){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            int temp=n/2;
            for(int i=1;i<=n;i++){
                if(i&1){
                    cout<<temp-1<<" ";
                }
                else{
                    cout<<-temp<<" ";
                }
            }
            cout<<endl;
        }
    }
    else{
        cout<<"YES"<<endl;
        for(int i=1;i<=n;i++){
            if(i&1){
                cout<<"5 ";
            }
            else{
                cout<<"-5 ";
            }
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