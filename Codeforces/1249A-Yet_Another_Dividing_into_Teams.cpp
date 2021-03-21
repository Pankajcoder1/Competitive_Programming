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
		int count=0,n;
		cin>>n;
		int *arr=new int[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+n);
		for(int i=0;i<n;i++)
		{
			if(arr[i+1]-arr[i]==1)
				count++;
		}
		if(count==0)
			cout<<1<<endl;
		else
			cout<<2<<endl;
	}
}