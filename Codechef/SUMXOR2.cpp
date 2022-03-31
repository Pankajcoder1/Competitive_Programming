/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod=998244353;
vector<ll>ans(200001,0);
vector<vector<ll>> cal_ncr(10000,vector<ll>(10000,0));

// partially accepted
void ncr()
{
	cal_ncr[0][0]=1;
	for(ll i=1;i<10000;i++)
	{
		cal_ncr[i][0]=1;
		for(ll j=1;j<10000;j++)
		{
			cal_ncr[i][j]=((cal_ncr[i-1][j]%mod)+(cal_ncr[i-1][j-1]%mod))%mod;
		}
	}
}

ll compute(ll i,vector<ll>& bits,ll n)
{
	ll temp_ans=0;
	for(ll k=0;k<31;k++)
	{
		ll set_bit=bits[k];
		ll non_set_bit=n-set_bit;
        ll temp=0;
		if(set_bit>0)
		{
            for(ll j=1;j<=set_bit&&j<=i;j+=2)
			{
                temp+=((cal_ncr[set_bit][j]%mod)*(cal_ncr[non_set_bit][i-j]%mod))%mod;
			}
		}
        temp_ans+=(((1<<k)%mod)*(temp%mod))%mod;
	}
	return temp_ans;
}

long long solve()
{
    ll n;
    cin>>n;
    ncr();
    vector<ll>bits(31,0);
    vector<ll> v(n);
    ll temp_sum=0;
    for(ll i=0;i<n;i++)
    {
    	cin>>v[i];
    	ll temp=v[i];
    	temp_sum+=v[i];
    	ll pos=0;
    	while(temp)
    	{
    		if(temp&1)
    			bits[pos]++;
    		pos++;
    		temp>>=1;
    	}
    }

    //  set bits  
    // for(ll i=0;i<31;i++)
    // {
    // 	if(bits[i]>0)
    // 	{
    // 		cout<<"set bit at "<<i<<" and its fre "<<bits[i]<<endl;
    // 	}
    // }

    //  compute xor for all k length subset
    for(ll i=0;i<=n;i++)
    {
    	if(i==0)
    	{
    		ans[i]=0;
    	}
        else if(i==1)
            ans[i]=temp_sum%mod;
    	else
    	{
    		ll tempo=compute(i,bits,n);
    		tempo%=mod;
    		ans[i]=((ans[i-1]%mod)+(tempo%mod))%mod;
    		ans[i]%=mod;
    	}
    }


    ll queries;
    cin>>queries;
    while(queries--)
    {
    	ll M;
    	cin>>M;
    	cout<<ans[M]%mod<<endl;
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
    // cin>>test;
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