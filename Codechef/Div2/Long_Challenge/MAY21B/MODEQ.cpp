/*
    written by Pankaj Kumar.
    country:-INDIA
    Institute: National Institute of Technology, Uttarakhand
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


// Techniques
// divide into cases, brute force, pattern finding
// sort, greedy, binary search, two pointer
// transform into graph

long long solve()
{
    ll n,m;
    cin>>n>>m;
    ll ans=0;
    vector<ll> count(n+1,1);
    for(ll b=1;b<=n;b++){
        if(b==1)
            continue;
        ll temp=m%b;
        ans+=count[temp];
        for(ll j=temp;j<=n;j+=b)
            count[j]++;
    }
    cout<<ans<<endl;
    return 0;
}

int main()
{
    // #ifndef ONLINEJUDGE
    //    freopen("input.txt","r",stdin);
    //    freopen("output.txt","w",stdout);
    // #endif
    long long test=1;
    cin>>test;
    // scanf("%lld",&test);
    while(test--)
    {
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