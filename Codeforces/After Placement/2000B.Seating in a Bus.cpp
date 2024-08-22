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
    int first=v[0],second=v[0];
    for(int i=1;i<n;i++){
        if(v[i]==second+1){
            second++;
            continue;
        }
        else if(v[i]==first-1)
        {
            first--;
            continue;
        }
        else{
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
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