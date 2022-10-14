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


int main()
{
    long long testCase;
    cin>>testCase;
    while(testCase--){
        ll n,q;
        cin>>n>>q;
        vector<ll> v(n);
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
        vector<pair<ll,ll>> query(q);
        vector<ll> ans(q);
        ll sum=0;
        for(ll i=0;i<q;i++){
            cin>>query[i].first;
            query[i].second=i;
        }
        sort(query.begin(),query.end());
        ll pos=0;
        for(ll i=0;i<q;i++){
            while(pos<n && v[pos]<=query[i].first){
                sum+=v[pos];
                pos++;
            }
            ans[query[i].second]=sum;
        }
        for(auto x:ans){
            cout<<x<<" ";
        }
        cout<<endl;
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