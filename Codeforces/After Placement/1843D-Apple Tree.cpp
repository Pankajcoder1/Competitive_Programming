/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<vector<int>> adj;
vector<int> value;

int dfs(int at, int from){
    int count=0;
    for(auto child: adj[at]){
        if(child!=from){
            count+=dfs(child,at);
        }
    }
    if(count==0 && adj[at].size()==1){
        count++;
    }
    value[at]=count;
    return count;
}


int solve(){
    int n;
    cin>>n;
    adj.resize(n+1);
    value.resize(n+1,0);
    for(int i=0;i<n-1;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1,1);
    int q;
    cin>>q;
    for(int i=1;i<=q;i++){
        int u,v;
        cin>>u>>v;
        long long ans=((long long)value[u]*(long long)value[v]);
        cout<<ans<<endl;
    }
    adj.clear();
    value.clear();
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