/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int solve(){
    int x,k;
    cin>>x>>k;
    if(x%k){
        cout<<1<<endl<<x<<endl;
    }
    else{
        cout<<2<<endl<<1<<" "<<x-1<<endl;
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
