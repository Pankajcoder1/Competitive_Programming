/*
	written by Pankaj Kumar.
	country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int solve(){
	ll n, x;
	cin >> n >> x;
	vector<pair<ll, ll>> v;
	ll temp = 0;
	for(int i=0;i<n;i++)
	{
		cin >> temp;
		v.push_back({temp, i});
	}
	sort(v.begin(), v.end());
	ll i = 0, j = n - 1;
	while (j > i)
	{
		temp = v[i].first + v[j].first;
		if (temp == x)
		{
			cout << v[i].second+1 << " " << v[j].second + 1 << endl;
			return 0;
		}
		if (temp < x)
			i++;
		else
			j--;
	}
	cout << "IMPOSSIBLE" << endl;
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