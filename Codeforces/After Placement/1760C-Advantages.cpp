/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


/* ascii value
A=65,Z=90,a=97,z=122
*/

// Techniques :
// divide into cases, brute force, pattern finding
// sort, greedy, binary search, two pointer
// transform into graph


int solve(){
    int n;
    cin>>n;
    vector<pair<int,int>> v(n);
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first;
        v[i].second=i;
    }
    sort(v.begin(),v.end());
    int maxo1=v[n-1].first;
    int maxo2=v[n-2].first;
    for(auto x:v){
        if(x.first==maxo1){
            ans[x.second]=x.first-maxo2;
        }
        else{
            ans[x.second]=x.first-maxo1;
        }
    }
    for(auto x:ans){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}
int main()
{
    long long testCase;
    cin>>testCase;
    while(testCase--){
        solve();
    }
    return 0;
}
/* -----------------END OF PROGRAM --------------------*/
/*
* stuff you should look before submission
* constraint and time limit
* int overflow
* special test case (n=0||n=1||n=2)
* don't get stuck on one approach if you get wrong answer
*/
