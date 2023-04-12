/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int maxo = 0;
    long long sum = 0;
    for (auto &x : v)
    {
        cin >> x;
        maxo = max(maxo, x);
        sum += x;
    }
    long long k = max((long long)maxo, ((sum + n - 2) / (n - 1)));
    cout << (k * (n - 1)) - sum << endl;
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