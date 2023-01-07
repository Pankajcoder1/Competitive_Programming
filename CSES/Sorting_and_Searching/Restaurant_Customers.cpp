/*
	written by Pankaj Kumar.
	country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int solve(){
	ll n;
	cin >> n;
	ll a, b, ans = 0, maxo = 0;
	map<ll, ll> m;
	for (ll i = 0; i < n; i++)
	{
		cin >> a >> b;
		m[a]++;
		m[b]--;
	}
	for (auto x : m)
	{
		ans += x.second;
		maxo = max(maxo, ans);
	}
	cout << maxo << endl;
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