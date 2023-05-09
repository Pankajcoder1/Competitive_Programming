/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int solve(){
    int n,k;
    cin>>n>>k;
    for(int i=0;i<=100;i++){
        int j=n-i;
        int temp=(i*(i-1))/2+(j*(j-1))/2;
        if(temp==k){
            cout<<"YES"<<endl;
            for(int z=1;z<=i;z++){
                cout<<"1 ";
            }
            for(int z=1;z<=n-i;z++){
                cout<<"-1 ";
            }
            cout<<endl;
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
