#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<string.h>
#define pan cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
#define mod 1000000007;
using namespace std;
typedef long long ll ;
#define line cout<<endl;

int main()
{
	pan;
	ll t;
	cin>>t;
	while(t--)
	{
		int a,b,c,d,temp;
		cin>>a>>b>>c>>d;
		if((a+b+c+d)%3!=0)
			cout<<"NO"<<endl;
		else
		{
			temp=(a+b+c+d)/3;
			if(temp>=a && temp>=b && temp>=c)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;

		}
	}
}