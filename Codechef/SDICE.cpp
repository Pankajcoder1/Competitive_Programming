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
    vector<ll> v={0,20,36,51,60};
    if(n==1)
    	cout<<20<<endl;
    else if(n==2)
    	cout<<36<<endl;
    else if(n==3)
    	cout<<51<<endl;
    else if(n==4)
    	cout<<60<<endl;
    else{
    	ll temp=n/4;
    	ll d=n%4;
    	// (6+5)*4 on rest 8 face
    	ll ans=44*temp+(4-d)*4+v[d];
    	cout<<ans<<endl;
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
    // scanf("%lld",&test);
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