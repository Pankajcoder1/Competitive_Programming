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
	int t;
	set<char>s;
	string s1;
	getline(cin,s1);
	for(int i=0;i<s1.length();i++)
		s.insert(s1[i]);
	t=s.size();
	if(t%2!=1)
		cout<<"CHAT WITH HER!"<<endl;
	else
		cout<<"IGNORE HIM!"<<endl;
	s.clear();
}