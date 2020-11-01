/*
	written by Pankaj Kumar.
	country:-INDIA
*/
#include<algorithm>
#include<string.h>
#include<iostream>
#include<sstream>
#include<vector>
#include<deque>
#include<cmath>
#include<set>
#include<map>
using namespace std;
typedef long long ll ;
typedef vector<int> vi;
typedef vector<pair<int,int>> vpi;
typedef vector<ll> vl;
typedef vector<pair<ll,ll>> vpl;
typedef vector<string> vs;
typedef set<string> ss;
typedef set<int> si;
typedef set<ll> sl;
typedef set<pair<int,int>> spi;
typedef set<pair<ll,ll>> spl;
#define pan cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
// define values.
#define mod 1000000007;
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
#define INT_SIZE sizeof(int)
#define INT_BITS INT_SIZE*8-1
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
	int n;
	cin>>n;
	string s,temp;
	cin>>s;
	map<string,int> m;
	for(int i=0;i<n-1;i++)
	{
		temp=s.substr(i,2);
		m[temp]++;
	}

	map<string ,int>::iterator it;
	it=m.begin();
	string most=it->ff;
	int occur=it->ss;
	for(it=m.begin();it!=m.end();it++)
	{
		if(it->ss>occur)
		{
			most=it->ff;
			occur=it->ss;
		}
	}
	cout<<most<<endl;
}