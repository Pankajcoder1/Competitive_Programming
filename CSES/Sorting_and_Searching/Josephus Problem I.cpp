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
    queue<int> q;
    for(int i=1;i<=n;i++){
        q.push(i);
    }
    bool flag=false;
    while(q.size()){
        if(flag){
            cout<<q.front()<<" ";
            q.pop();
        }
        else{
            q.push(q.front());
            q.pop();
        }
        flag^=1;
    }
    return 0;
}
int main()
{
    int testCase=1;
    // cin>>testCase;
    while(testCase--){
        solve();
    }
    return 0;
}