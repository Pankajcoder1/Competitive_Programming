/*
	written by Pankaj Kumar.
	country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int solve()
{
	string s;
	cin >> s;
	map<char, ll> m;
	for (auto x : s)
	{
		m[x]++;
	}

	ll minUD = min(m['U'], m['D']);
	ll minLR = min(m['L'], m['R']);

	if (minUD == 0 && minLR == 0)
	{
		cout << 0 << endl;
		cout << " " << endl;
	}
	else if (minUD == 0)
	{
		cout << 2 << endl
			 << "LR" << endl;
	}
	else if (minLR == 0)
	{
		cout << 2 << endl
			 << "UD" << endl;
	}
	else
	{
		string s = "";
		for (ll i = 0; i < minUD; i++)
		{
			s += 'U';
		}
		for (ll i = 0; i < minLR; i++)
		{
			s += 'R';
		}
		s += string(minUD, 'D');
		s += string(minLR, 'L');

		cout << s.size() << endl
			 << s << endl;
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