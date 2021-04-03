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
	ll t;
	cin>>t;
	while(t--)
	{
		ll a,b,c,temp,res=0;
		cin>>a>>b>>c;
		temp=min(c/2,b);
		b-=temp;
		res+=temp;
		temp=min(b/2,a);
		res+=temp;
		cout<<res*3<<endl;
	}
}