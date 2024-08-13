/*
	written by Pankaj Kumar.
	country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int solve(){
	ll n,d;
	cin>>n>>d;
	string s;
	cin>>s;
	ll j=0,current_pos=0,count=0;
	while(j<n)
	{
		ll temp_pos=0;
		for(ll k=j+1;k<=j+d&&k<n;k++)
		{
			if(s[k]=='1')
				temp_pos=k;
		}
		if(temp_pos!=0)
		{
			current_pos=temp_pos;
			j=temp_pos;
			count++;
		}
		else
			break;
	}
	if(j==n-1)
		cout<<count<<endl;
	else
		cout<<-1<<endl;
	return 0;
}

int main()
{
	int testCase=1;
	while(testCase--){
		solve();
	}
	return 0;
}