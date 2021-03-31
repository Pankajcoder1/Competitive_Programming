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
#define phi 1.618
#define line cout<<endl;
#define forll(i,n) for(ll j=i;j<ll(n);j++)
#define fori(i,n) for(int j=0;j<int(n);j++)
/* ascii value 
A=65,Z=90,a=97,z=122
*/

int main()
{
	pan;
	ll n,sum_d=0;
	cin>>n;
	ll arr[n][n];
	for(ll i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j];
			if(i==j || i+j==n-1 || i==(n-1)/2 || j==(n-1)/2)
				sum_d+=arr[i][j];
		}
	}
	cout<<sum_d<<endl;
}