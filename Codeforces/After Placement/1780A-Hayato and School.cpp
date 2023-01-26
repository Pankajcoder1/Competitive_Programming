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
    vector<int> a(n), odd, even;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        (a[i] % 2 ? odd : even).push_back(i);
    }
    vector<int> temp;
    for (int i = 0; i < 3 && i < odd.size(); i++)
    {
        temp.push_back(odd[i]);
    }
    for (int i = 0; i < 3 && i < even.size(); i++)
    {
        temp.push_back(even[i]);
    }
    for (int i : temp)
    {
        for (int j : temp)
        {
            for (int k : temp)
            {
                if (i != j && j != k && k != i && (a[i] + a[j] + a[k]) % 2)
                {
                    cout << "YES\n";
                    cout << i + 1 << " " << j + 1 << " " << k + 1 << "\n";
                    return 0;
                }
            }
        }
    }
    cout << "NO\n";
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