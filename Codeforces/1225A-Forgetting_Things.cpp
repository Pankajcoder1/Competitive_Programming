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
	ll da,db;
	cin>>da>>db;
	if(da==db)
		cout<<da*10+8<<" "<<db*10+9<<endl;
	else if(da==9 && db==1)
		cout<<9<<" "<<10<<endl;
	else if(db==da+1)
		cout<<da*10+9<<" "<<db*10<<endl;
	else
		cout<<-1<<endl;
}