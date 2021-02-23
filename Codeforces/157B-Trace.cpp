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
#define loop(i,start,end) for(ll i=start;i<end;i++)
#define loop0(num) for(ll i=0;i<ll(num);i++)
// Some print
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
#define cc ll test;cin>>test;while(test--)
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
	pan;
	ll n;
	double pi=3.1415926535;
	cin>>n;
	vl v(n,0);
	for(auto &s:v)
		cin>>s;
	double temp=0;
	if(n==1)
	{
		temp=pi*v[0]*v[0];
		printf("%.9f\n",temp);
	}
	else
	{
		double sum=0;
		sort(v.begin(),v.end());
		if(n%2==0)
		{
			for(ll i=n-1;i>=0;i-=2)
			{
				sum+=pi*(v[i]+v[i-1])*abs(v[i]-v[i-1]);
			}
		}
		else
		{
			for(ll i=n-1;i>=1;i-=2)
			{
				sum+=pi*(v[i]+v[i-1])*abs(v[i]-v[i-1]);
			}
			sum+=pi*v[0]*v[0];
		}
		printf("%.9f\n",sum);
	}

}