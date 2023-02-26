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
    vector<int> v(n+1,0);
    for(int i=0;i<m;i++){
        int temp;
        cin>>temp;
        v[temp]++;
    }
    int mini=INT_MAX;
    for(int i=1;i<=n;i++){
        mini=min(mini,v[i]);
    }
    cout<<mini<<endl;
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