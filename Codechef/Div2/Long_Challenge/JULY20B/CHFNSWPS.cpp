/*
	written by Pankaj Kumar.
	country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef set<pair<int,int>> spi;
typedef set<pair<ll,ll>> spl;
typedef vector<pair<int,int>> vpi;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<bool> vb;
typedef vector<char> vc;
typedef vector<pair<ll,ll>> vpl;
typedef vector<string> vs;
typedef map<int,int>mi;
typedef map<ll,ll> ml;
typedef set<string> ss;
typedef set<char>sc;
typedef set<int> si;
typedef set<ll> sl;
#define pan cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
// define values.
#define mod 1000000007
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
#define loop(i,start,end) for(ll i=ll(start);i<ll(end);i++)
#define loop0(num) for(ll i=0;i<ll(num);i++)
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
	while(y>0)
	{
		if(y%2==1)res*=x;
		y/=2; x*=x;
	}
	return res;
}
/* ascii value 
A=65,Z=90,a=97,z=122
*/
/*  -----------------------------------------------------------------------------------*/

int main()
{
	//freopen("input.txt"a, "r", stdin);
	pan;
	cc
	{
		ll n;
		cin>>n;
		vl a(n,0),b(n,0);
		map<ll,ll>mp,mp1,mp2;
		ll mini=INT_MAX;
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
			mini=min(mini,a[i]);
			mp[a[i]]++;
		}
		for(ll i=0;i<n;i++)
		{
			cin>>b[i];
			mini=min(b[i],mini);
			mp[b[i]]++;
		}
		ll flag=0;
		for(auto v:mp)
		{
			if(v.second%2==1)
			{
				flag=1;
				break;
			}
			else
			{
				mp1[v.first]=v.second/2;
			}
		}
		if(flag)
		{
			cout<<-1<<endl;
			continue;
		}
		else
		{
			mp2=mp1;
			vector<ll>v1,v2;
			for(ll i=0;i<n;i++)
			{
				if(mp1[a[i]]>0)
				{
					mp1[a[i]]--;
				}
				else
				{
					v1.push_back(a[i]);
				}
			}
			for(ll i=0;i<n;i++)
			{
				if(mp2[b[i]])
					mp2[b[i]]--;
				else
				{
					v2.push_back(b[i]);
				}
			}
			sort(v1.begin(),v1.end());
			sort(v2.begin(),v2.end(),greater<ll>());
			ll y=v1.size();
			if(y==0)
				cout<<0<<endl;
			else
			{
				ll ans=0;
				for(ll i=0;i<y;i++)
				{
					ans+=min(2*mini,min(v1[i],v2[i]));
				}
				cout<<ans<<endl;
			}
		}
	}
	
}