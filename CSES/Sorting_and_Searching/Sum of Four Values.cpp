/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int solve()
{
    int n, x;
    cin >> n >> x;
    unordered_map<int, pair<int, int>> mp;
    vector<int> v(n);
    for (auto &x : v)
    {
        cin >> x;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            int temp_sum = v[i] + v[j];
            int req_sum = x - temp_sum;
            if (req_sum <= 0)
            {
                continue;
            }
            if (mp.find(req_sum) != mp.end())
            {
                pair<int, int> t = mp[req_sum];
                if (t.first != i && t.first != j && t.second != i && t.second != j)
                {
                    cout << t.first + 1 << " " << t.second + 1 << " " << i + 1 << " " << j + 1 << endl;
                    return 0;
                }
            }
            mp[temp_sum] = {i, j};
        }
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}
int main()
{
    int testCase = 1;
    // cin>>testCase;
    while (testCase--)
    {
        solve();
    }
    return 0;
}