/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int parity(int n){
    if(n%2==0){
        return 0;
    }
    else{
        return 1;
    }
}

int solve(){
    int n;
    cin>>n;
    stack<int> s;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    s.push(v[0]);
    for(int i=1;i<n;i++){
        if(parity(s.top())==parity(v[i])){
            int temp=s.top();
            s.pop();
            s.push(temp*v[i]);
        }
        else{
            s.push(v[i]);
        }
    }
    cout<<n-s.size()<<endl;
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