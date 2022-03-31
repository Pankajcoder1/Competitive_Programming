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
map<ll,ll> m;
const ll N=1e3;

// Partially AC

void cal(){
    ll ans=0;
    for(ll i=1;i<=N;i++){
        ans=0;
        ll temp1=0,temp2=0;
        for(ll j=2;j<=(2*i)+1;j++){
            temp1=i+((j-1)*(j-1));
            temp2=i+(j*j);
            // cout<<"temp1 "<<temp1<<" "<<temp2<<endl;
            ans+=__gcd(temp1,temp2);
        }
        m[i]=ans;
    }
}

long long solve()
{
    ll k;
    cin>>k;
    // cout<<m[k]<<endl;
    for(ll i=1;i<=k;i++){
        cout<<ll(m[i])<<endl;
    }
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
    cal();
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