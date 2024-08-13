/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int solve(){
    int x,y,k;
    cin>>x>>y>>k;
    if(k&1){
        cout<<x<<" "<<y<<endl;
    }
    for(int i=1;i<=k/2;i++){
        cout<<x-i<<" "<<y-i<<endl;
        cout<<x+i<<" "<<y+i<<endl;
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