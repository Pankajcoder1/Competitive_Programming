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
    vector<int> v(n);
    for(auto &x:v){
        cin>>x;
    }
    sort(v.begin(),v.end());
    // -1 because of 0 based indexing
    int mid=((n+1)/2)-1;
    int count=0;
    for(int i=mid;i<n;i++){
        if(v[i]==v[mid]){
            count++;
        }
    }
    cout<<count<<endl;
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