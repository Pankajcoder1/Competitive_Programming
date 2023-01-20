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

    if ((b > a && d > c && c > a && d > b) ||
        (a > c && b > d && d > c && b > a) ||
        (c > d && a > b && b > d && a > c) ||
        (d > b && c > a && a > b && c > d))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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