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



int main()
{
	//freopen("input.txt"a, "r", stdin);
	pan;
	ll test;
	cin>>test;
	ll i=1;
	while(test--)
	{
		cout<<"Case #"<<i<<": ";
		i++;
		vl kick,start;
		string s;
		cin>>s;
		ll n=s.size();
		for(ll i=0;i+3<n;i++)
		{
			if(s[i]=='K'&&s[i+1]=='I'&&s[i+2]=='C'&&s[i+3]=='K')
			{
				kick.push_back(i);
			}
		}
		for(ll i=0;i+4<n;i++)
		{
			if(s[i]=='S'&&s[i+1]=='T'&&s[i+2]=='A'&&s[i+3]=='R'&&s[i+4]=='T')
			{
				start.push_back(i);
			}
		}
		ll count=0;
		for(ll i=0;i<kick.size();i++)
		{
			for(ll j=0;j<start.size();j++)
			{
				if(start[j]>kick[i])
					count++;
			}
		}
		cout<<count<<endl;
	}
}
