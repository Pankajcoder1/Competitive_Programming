/*
	written by pankaj kumar.
*/
#include<iostream>
#include<vector>
#include<cmath>
#include<set>
#include<algorithm>
#include<string.h>
#define pan cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
#define mod 1000000007;
using namespace std;
typedef long long ll ;
#define line cout<<endl;
/* ascii value 
A=65,Z=90,a=97,z=122
*/

int main()
{
	pan;
	ll a,b,c,d,e,f,temp,res=0;
	cin>>a>>b>>c>>d>>e>>f;
	if(e>f)
	{
		res+=min({a,d})*e;
		d-=min({a,d});
		res+=min({b,c,d})*f;
	}
	else
	{
		res+=min({b,c,d})*f;
		d-=min({b,c,d});
		res+=min({a,d})*e;
	}
	cout<<res<<endl;
}