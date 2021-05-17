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
ll power(ll a,ll b,ll mod){
    ll ans=1;
    a=a%mod;
    while(b>0){
        if(b&1){
            ans=(ans*a);
            ans=ans%mod;
        }
        b/=2;
        a*=a;
        a%=mod;
    }
    return ans;
}
long long solve()
{
    ll n;
    cin>>n;
    n--;
    ll mod=1e9+7;
    cout<<ll(power(2,n,mod))<<endl;
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