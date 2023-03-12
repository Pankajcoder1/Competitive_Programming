/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int> v[2005];
int vis[2005];
int dfs(int a)
{
    int z = 0;
    vis[a] = 1;
    for (int x : v[a])
    {
        if (!vis[x])
            z = max(z, dfs(x));
    }
    return (z + 1);
}
void solve()
{
    set<int> boss;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int t;
        cin >> t;
        if (t == -1)
            boss.insert(i);
        else
            v[t].push_back(i);
    }
    int z = 0;
    for (int a : boss)
    {
        z = max(z, dfs(a));
    }
    cout << z;
}
int main()
{
    int testCase=1;
    while(testCase--){
        solve();
    }
    return 0;
}