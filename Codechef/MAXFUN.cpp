/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

long long solve()
{
    ll n;
    cin>>n;
    vector<ll> v(n);
    ll ans=0,maxo=0;
    for(ll i=0;i<n;i++)
    {
    	cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(ll i=1;i<n-1;i++)
    {
    	ans=0;
    	ans+=abs(v[i]-v[0])+abs(v[i]-v[n-1])+abs(v[0]-v[n-1]);
    	maxo=max(maxo,ans);
    }
    cout<<maxo<<endl;
    return 0;
}

int main()
{
    // #ifndef ONLINEJUDGE
    //     freopen("input.txt","r",stdin);
    //     freopen("output.txt","w",stdout);
    // #endif
    long long test;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
/* stuff you should look before submission 
* int overflow
* special test case (n=0||n=1||n=2)
* don't get stuck on one approach if you get wrong answer
*/