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
		ll arr[3];
		cin>>arr[0]>>arr[1]>>arr[2];
		sort(arr,arr+3);
		if(arr[0]+arr[1]>=arr[2]-1)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}