/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int solve()
{
    string a, b;
    cin >> a >> b;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    int pos = 0;
    for (int i = 0; i < b.size(); i++)
    {
        if (b[i] == '1')
        {
            while (pos < a.size())
            {
                if (pos >= i && a[pos] == '1')
                {
                    cout << abs(i - pos) << endl;
                    return 0;
                }
                pos++;
            }
        }
    }
    cout << 0 << endl;
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