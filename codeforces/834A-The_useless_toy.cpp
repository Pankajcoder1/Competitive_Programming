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
#define loop(i,start,end) for(ll i=start;i<end;i++)
#define loop0(num) for(ll i=0;i<ll(num);i++)
// Some print
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
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
ll d(ll temp)
{
	ll count=0;
	for(ll i=1;i<=sqrt(temp);i++)
	{
		if(temp%i==0)
		{
			if(temp/i==i)
				count++;
			else
				count+=2;
		}
	}
	// cout<<"count is "<<count<<endl;
	return count;
}

int main()
{
	pan;
	char ch1,ch2;
	cin>>ch1>>ch2;
	ll n;
	cin>>n;
	map<char,int> m;
	m['v']=0;
	m['<']=1;
	m['^']=2;
	m['>']=3;
	n=n%4;
	if(n==0)
		cout<<"undefined"<<endl;
	else
	{
		ll start=m[ch1];
		ll temp_n=n;
		while(n--)
		{
			if(start>3)
				start=0;
			start++;
		}
		if(start>3)
				start=0;
		ll end=m[ch2];
		if(end==start&&temp_n!=2)
			cout<<"cw"<<endl;
		else if(end!=start&&temp_n!=2)
			cout<<"ccw"<<endl;
		else
			cout<<"undefined"<<endl;
	}
}