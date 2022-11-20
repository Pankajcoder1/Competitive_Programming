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
    int n,q;
    cin>>n>>q;
    map<pair<int,int>,bool> mp;
    while(q--){
        int t,a,b;
        cin>>t>>a>>b;
        if(t==1){
            mp[{b,a}]=true;
        }
        else if(t==2){
            mp[{b,a}]=false;
        }
        else{
            if(mp[{a,b}] && mp[{b,a}]){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
    }
    return 0;
}
int main()
{
    long long testCase=1;
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
