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
	vector<pair<ll, ll>> t(n);
	for (ll i = 0; i < n; i++)
	{
		cin >> t[i].first >> t[i].second;
	}
	sort(t.begin(),t.end());

	ll ans = 0, current = 0;
	for (ll i = 0; i < n; i++)
	{
		if (i == 0)
		{
			current = t[i].second;
			ans++;
		}
		else
		{
			if (t[i].first >= current)
			{
				current = t[i].second;
				ans++;
			}
			else
			{
				current = min(current, t[i].second);
			}
		}
	}
	cout << ans << endl;
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