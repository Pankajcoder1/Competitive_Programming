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
	ll a,b,c,d,sum=0;
	cin>>a>>b>>c>>d;
	string s;
	cin>>s;
	for(ll i=0;i<s.length();i++)
	{
		if(s[i]=='1')
			sum+=a;
		else if(s[i]=='2')
			sum+=b;
		else if(s[i]=='3')
			sum+=c;
		else
			sum+=d;
	}
	cout<<sum<<endl;
}