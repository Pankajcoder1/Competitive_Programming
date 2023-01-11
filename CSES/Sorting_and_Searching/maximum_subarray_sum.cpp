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
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	ll temp_sum = 0, max_sum = INT_MIN;
	for(int i=0;i<n;i++)
	{
		temp_sum += v[i];
		if (temp_sum > max_sum)
			max_sum = temp_sum;
		if (temp_sum < 0)
			temp_sum = 0;
	}
	cout << max_sum << endl;
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