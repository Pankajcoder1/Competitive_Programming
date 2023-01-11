/*
	written by Pankaj Kumar.
	country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int solve(){
	ll n, temp;
	cin >> n;
	vector<int> v;
	for(int i=0;i<n;i++)
	{
		cin >> temp;
		auto it = upper_bound(v.begin(),v.end(), temp);
		if (it == v.end())
		{
			v.push_back(temp);
		}
		else
			*it = temp;
	}
	cout << v.size() << endl;
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