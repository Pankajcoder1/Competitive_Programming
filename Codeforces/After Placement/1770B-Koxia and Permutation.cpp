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
    vector<int> v(n);
    int first=n,second=1;
    for(int i=0;i<n;i++){
        if(i&1){
            v[i]=second++;
        }
        else{
            v[i]=first--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
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