/*
    written by Pankaj Kumar.
    country:-INDIA
    Institute: National Institute of Technology, Uttarakhand
*/
#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#define pan cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0)
using namespace std;
typedef long long ll ;

int main()
{
	ll t,a,b,x,y;
	cin>>t;
	for(ll i=0;i<t;i++)
	{
		cin>>a>>b>>x>>y;
		cout<<max({b*x,b*(a-(x+1)),a*y,a*(b-(y+1))})<<endl;
	}
	return 0;
}