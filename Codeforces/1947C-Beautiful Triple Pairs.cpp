/*
	written by Pankaj Kumar.
	country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int solve(){
	ll n, ans=0;
	cin>>n;
	map<tuple<ll,ll,ll>,ll> mp;
	vector<ll> v(n);
	for(auto &x:v){
		cin>>x;
	}
	for(ll i=0;i+2<n;i++){
		ans+=(mp[{v[i],v[i+1],-1}]+mp[{v[i],-1,v[i+2]}]+mp[{-1,v[i+1],v[i+2]}]-3*mp[{v[i],v[i+1],v[i+2]}]);
		mp[{v[i], v[i + 1], -1}]++;
		mp[{v[i], -1, v[i + 2]}]++;
		mp[{-1, v[i + 1], v[i + 2]}]++;
		mp[{v[i], v[i + 1], v[i + 2]}]++;
	}
	cout<<ans<<endl;
	return 0;
}
int main()
{
	int testCase=1;
	cin>>testCase;
	while(testCase--){
		solve();
	}
	return 0;
}