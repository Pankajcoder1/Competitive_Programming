/*
    written by Pankaj Kumar.
    country:-INDIA
    Institute: National Institute of Technology, Uttarakhand
*/
#include<iostream>
#include<vector>
#define pan cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0)
using namespace std;
typedef long long ll ;

int main()
{
	pan;
	ll t,x=0;
	cin>>t;
	vector <ll>a(t);
	for(ll i=0;i<t;i++)
	{
		cin>>a[i];
		a[i]=a[i]+x;
		x=max(x,a[i]);
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
}