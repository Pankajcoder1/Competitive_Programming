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
#define forll(i,n) for(ll j=i;j<ll(n);j++)
#define fori(i,n) for(int j=0;j<int(n);j++)
/* ascii value 
A=65,Z=90,a=97,z=122
*/

int main()
{
	pan;
	int n,no,sum1=0,sum2=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>no;
		sum1+=no;
	}
	for(int i=0;i<n;i++)
	{
		cin>>no;
		sum2+=no;
	}
	if(sum1>=sum2)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}