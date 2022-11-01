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
int sign(int a)
{
    if (a > 0)
        return 1;
    else if (a < 0)
        return -1;
    else
        return 0;
}

int solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    if (n & 1)
    {
        cout << -1 << endl;
        return 0;
    }

    vector<pair<int, int>> ans;
    // bool flag = true;
    for (int i = 0; i < n; i += 2)
    {
        if (sign(v[i]) == sign(v[i + 1]))
        {
            ans.push_back({i + 1, i + 2});
        }
        else
        {
            ans.push_back({i + 1, i + 1});
            ans.push_back({i + 2, i + 2});
        }
    }
    cout << ans.size() << endl;
    for (auto x : ans)
    {
        cout << x.first << " " << x.second << endl;
    }
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
