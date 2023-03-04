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
    string s;
    cin>>s;
    vector<vector<int>> count(26,vector<int>(2,0));
    int ans=0;

    for(auto x:s){
        if(x>='a' && x<='z'){
            count[x-'a'][0]++;
        }
        else{
            count[x-'A'][1]++;
        }
    }
    for(int i=0;i<26;i++){
        ans+=min({count[i][0],count[i][1]});
        int temp=min({k,abs(count[i][0]-count[i][1])/2});
        ans+=temp;
        k-=temp;
    }
    cout<<ans<<endl;
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