/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a == 0)
    {
        cout << 1 << endl;
        return 0;
    }
    int ans = a;
    ans += 2 * min(b, c);
    ans += min(a + 1, abs(c - b) + d);
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