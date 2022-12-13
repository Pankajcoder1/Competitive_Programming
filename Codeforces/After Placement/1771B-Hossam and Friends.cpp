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

int solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n + 1, 0);
    for (int i = 0; i < m; ++i)
    {
        int x, y;
        cin >> x >> y;
        if (x > y)
            swap(x, y);
        v[y] = max(v[y], x);
    }
    int maxoPos = 0;
    long long ans=0;
    for (int i = 1; i <= n; ++i)
    {
        maxoPos = max(maxoPos, v[i]);
        ans += i - maxoPos;
    }
    cout << ans << '\n';
    return 0;
}
int main()
{
    long long testCase;
    cin >> testCase;
    while (testCase--)
    {
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