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
    long long sum=0;
    // bucket
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        pq.push(temp);
    }
    for(int i=0;i<m;i++){
        int temp;
        cin>>temp;
        pq.pop();
        pq.push(temp);
    }
    while(!pq.empty()){
        sum+=pq.top();
        pq.pop();
    }
    cout<<sum<<endl;
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