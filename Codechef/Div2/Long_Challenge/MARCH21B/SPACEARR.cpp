/*
    written by Pankaj Kumar.
    country:-INDIA
    Institute: National Institute of Technology, Uttarakhand
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

long long solve()
{
    ll n;
    cin>>n;
    vector<ll> v(n);
    ll temp=0;
    for(ll i=0;i<n;i++){
    	cin>>v[i];
    }
    sort(v.begin(),v.end());
    ll ans=0;
    for(ll i=0;i<n;i++){
    	if(v[i]>(i+1)){
    		cout<<"Second"<<endl;
    		return 0;
    	}
    }
    for(ll i=0;i<n;i++){
    	ans+=(i+1-v[i]);
    }
    if(ans&1)
    	cout<<"First"<<endl;
    else
    	cout<<"Second"<<endl;
    return 0;
}

int main()
{
    // #ifndef ONLINEJUDGE
    //    freopen("input.txt","r",stdin);
    //    freopen("output.txt","w",stdout);
    // #endif
    long long test=1;
    scanf("%lld",&test);
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