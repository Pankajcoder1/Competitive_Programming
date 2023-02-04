/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int solve()
{
    long long w, h;
    cin >> w >> h;
    long long maxo = 0;
    for (int i = 0; i < 4; i++)
    {
        long long k;
        cin >> k;
        long long x, y;
        cin >> x;
        k--;
        while (k--)
        {
            cin >> y;
        }
        if (i < 2)
        {
            maxo = max(maxo, (y - x) * h);
        }
        else
        {
            maxo = max(maxo, (y - x) * w);
        }
    }
    cout << maxo << endl;
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