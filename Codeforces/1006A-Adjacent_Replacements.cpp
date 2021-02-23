/*
	written by pankaj kumar.
*/
#include<iostream>
#include<vector>
#include<cmath>
#include<set>
#include<algorithm>
#include<string.h>
using namespace std;
typedef long long ll ;
typedef vector<int> vi;
typedef vector<pair<int,int>> vpi;
typedef vector<ll> vl;
typedef vector<pair<ll,ll>> vpl;
typedef set<int> si;
typedef set<long> sl;
typedef set<pair<int,int>> spi;
typedef set<pair<ll,ll>> spl;
// macros
#define pan cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
#define mod 1000000007;
#define phi 1.618
#define line cout<<endl;
/* ascii value 
A=65,Z=90,a=97,z=122
*/

int main()
{
	pan;
	ll n,no;
	cin>>n;
	for(ll i=0;i<n;i++)
	{
		cin>>no;
		if(no%2==0)
			no=no-1;
		cout<<no<<" ";
	}
	line;
}