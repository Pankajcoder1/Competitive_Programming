/*
	written by Pankaj Kumar.
	country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


/* ascii value
A=65,Z=90,a=97,z=122
*/

// Techniques :
// divide into cases, brute force, pattern finding
// sort, greedy, binary search, two pointer
// transform into graph

ll solve()
{
	long long n, x;
	cin >> n >> x;
	vector<long long> v(n);
	for (long long i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	sort(v.begin(), v.end(),greater<long long>());
	long long no_of_gondolas = 0;
	long long second = n - 1;
	for (long long i = 0; i <= second; i++)
	{
		if ((v[i] + v[second]) <= x)
		{
			second--;
			no_of_gondolas++;
		}
		else
		{
			no_of_gondolas++;
		}
	}
	cout << no_of_gondolas << endl;
	return 0;
}

int main()
{
	long long testCase=1;
	while(testCase--){
		solve();
	}
	return 0;
}
/* -----------------END OF PROGRAM --------------------*/
/*
* stuff you should look before submission
* constraint and time limit
* int overflow
* special test case (n=0||n=1||n=2)
* don't get stuck on one approach if you get wrong answer
*/