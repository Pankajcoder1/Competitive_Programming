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
	vector<int> v(n,0);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	sort(v.begin(), v.end());
	ll avg = v[n/2];
	ll res = 0;
	for(int i=0;i<n;i++)
	{
		res += abs(v[i] - avg);
	}
	cout << res << endl;
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