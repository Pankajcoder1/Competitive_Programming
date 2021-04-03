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
	int t,l=0,r=0;
	cin>>t;
	string s;
	cin>>s;
	for(ll i=0;i<t;i++)
	{
		if(s[i]=='L')
			l++;
		else
			r++;
	}
	cout<<l+r+1<<endl;
}