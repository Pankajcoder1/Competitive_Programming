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
	ll k,l,m,n,d,count=0;
	cin>>k>>l>>m>>n>>d;
	for(ll i=1;i<=d;i++)
	{
		if(i%k==0 || i%l==0||i%m==0||i%n==0)
			count++;
	}
	cout<<count<<endl;
}