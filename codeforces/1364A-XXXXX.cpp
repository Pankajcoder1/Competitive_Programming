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
#define loopi(a,b) for(int i=a;i<=b;i++)
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

int main()
{
	pan;
	int test;
	cin>>test;
	while(test--)
	{
		ll n,x,temp=0,maxo=0;
		cin>>n>>x;
		vl v(n,0);
		ll sum=0;
		ll temp_sum=0;
		int flag=0;
		for(ll i=0;i<n;i++)
		{
			cin>>temp;
			v[i]=temp;
			sum+=temp;
		}
		temp_sum=sum;
		for(ll i=0;i<n;i++)
		{
			if(temp_sum%x!=0)
			{
				flag=1;
				maxo=max(maxo,n-i);
			}
			temp_sum=sum-v[i];
		}
		temp_sum=sum;
		for(ll i=n-1;i>=0;i--)
		{
			if(temp_sum%x!=0)
			{
				flag=1;
				maxo=max(maxo,i+1);
			}
			temp_sum=sum-v[i];
		}
		if(flag==0)
			cout<<-1<<endl;
		else
			cout<<maxo<<endl;
	}
}