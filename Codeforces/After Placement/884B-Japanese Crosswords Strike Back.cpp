/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int solve(){
    int n,x;
    cin>>n>>x;
    int sum=0,temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        sum+=temp;
    }
    sum=sum+n-1;
    if(sum==x){
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
    while(testCase--){
        solve();
    }
    return 0;
}