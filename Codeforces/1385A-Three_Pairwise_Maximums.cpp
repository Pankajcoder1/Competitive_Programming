/*
	written by Pankaj Kumar.
	country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int solve()
{
	vector<int> a(3);
	for (auto &it : a)
	{
		cin >> it;
	}
	sort(a.begin(), a.end());
	if (a[1] != a[2])
	{
		cout << "NO" << endl;
	}
	else
	{
		cout << "YES" << endl;
		cout << a[0] << " " << a[0] << " " << a[2] << endl;
	}
	return 0;
}
int main()
{
	int testCase = 1;
	cin >> testCase;
	while (testCase--)
	{
		solve();
	}
	return 0;
}