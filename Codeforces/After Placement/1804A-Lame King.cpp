/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int solve()
{
    int a, b;
    cin >> a >> b;
    a = abs(a);
    b = abs(b);
    int ans = 2 * min(a, b);
    if (a != b)
    {
        ans += 2 * (abs(b - a)) - 1;
    }
    cout << ans << endl;

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