/*
	written by Pankaj Kumar.
	country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
// policy based ds
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef long long ll ;
typedef vector<ll> vl;
typedef vector<bool> vb;
typedef vector<char> vc;
typedef map<ll,ll> ml;
#define pan cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
// define values.
#define mod 10000009
#define phi 1.618
/* Bit-Stuff */
#define get_set_bits(a) (__builtin_popcount(a))
#define get_set_bitsll(a) ( __builtin_popcountll(a))
#define get_trail_zero(a) (__builtin_ctz(a))
#define get_lead_zero(a) (__builtin_clz(a))
#define get_parity(a) (__builtin_parity(a))
/*  Abbrevations  */
#define ff first
#define ss second
#define mp make_pair
#define line cout<<endl;
#define pb push_back
#define Endl "\n"
// loops
#define forin(arr,n) for(ll i=0;i<n;i++) cin>>arr[i];
// Some print
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
#define cc ll test;cin>>test;while(test--)
// sort
#define all(V) (V).begin(),(V).end()
#define srt(V) sort(all(V))
#define srtGreat(V) sort(all(V),greater<ll>())
// function

ll power(ll x,ll y)
{
	ll res=1;
	// x=x%mod;
	while(y>0)
	{
		if(y%2==1)
		{
			res*=x;
			// res=res%mod;
		}
		y/=2; x*=x; // x=x%mod;
	}
	return res;
}
// datatype definination
#define ordered_set tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>

/* ascii value 
A=65,Z=90,a=97,z=122
*/
/*  -----------------------------------------------------------------------------------*/

ll solve()
{
	
	ll n,m;
	cin>>n>>m;
	string s1,s2;
	unordered_map<string,string> name;
	unordered_map<string,ll> m1;
	unordered_map<string,ll> m2;
	vector<string> ans1,ans2;
	for(ll i=0;i<n;i++)
	{
		cin>>s1>>s2;
		name[s1]=s2;
	}
	for(ll i=0;i<m;i++)
	{
		cin>>s1;
		m1[s1]++;
		m2[name[s1]]++;
	}
	ll maxo1=0,maxo2=0;
	for(auto x:m1)
	{
		maxo1=max(maxo1,x.ss);
	}
	for(auto x:m1)
	{
		if(x.ss==maxo1)
		{
			ans1.pb(x.ff);
		}
	}
	srt(ans1);
	for(auto x:m2)
	{
		maxo2=max(maxo2,x.ss);
	}
	for(auto x:m2)
	{
		if(x.ss==maxo2)
			ans2.pb(x.ff);
	}
	srt(ans2);
	cout<<ans2[0]<<endl;
	cout<<ans1[0]<<endl;
	return 0;
}

int main()
{
	//freopen("input.txt"a, "r", stdin);
	pan;
	solve();
	// cc
	// {
	// 	solve();
	// }
}