/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int solve(){
    int a,b;
    cin>>a>>b;
    b=b%2;
    if(b==0 && a%2==0){
        cout<<"YES"<<endl;
    }
    else if(b==1 && a%2==0 && a!=0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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