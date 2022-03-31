/*
    written by Pankaj Kumar.
    country:-INDIA
    Institute: National Institute of Technology, Uttarakhand
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

// partilly AC
long long solve()
{
    ll n,m,k;
    cin>>n>>m>>k;
    vector<ll> g(n);
    for(ll i=0;i<n;i++)
    	cin>>g[i];
    vector<vector<ll>> v(m,vector<ll>(3,0));
    vector<ll> ans(1<<n,0);
    // 0- ui, 1- vi, 2-di
    for(ll i=0;i<m;i++){
    	for(ll j=0;j<3;j++)
    		cin>>v[i][j];
    	v[i][0]--;
    	v[i][1]--;
    }

    for(ll i=0;i<(1<<n);i++){
    	ll sum=0;
    	vector<bool>check(n,false);
    	for(ll j=0;j<n;j++){
    		if(i&(1<<j)){
    			check[j]=true;
    			sum+=g[j];
    		}
    	}
    	for(ll j=0;j<m;j++){
    		ll flag=0;
    		for(ll k=v[j][0];k<=v[j][1];k++){
    			if(check[k]==false)
    				flag=1;
    		}
    		if(flag==0)
    			sum+=v[j][2];
    	}

    	ans[i]=sum;
    	// cout<<"sum is "<<sum<<endl;
    }
    sort(ans.begin(),ans.end(),greater<ll>());
    for(ll i=0;i<k;i++)
    	cout<<ans[i]<<" ";
    cout<<endl;
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