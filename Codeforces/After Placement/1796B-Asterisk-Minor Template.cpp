/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int solve()
{
    string s, t;
    cin >> s >> t;

    if (s[0] == t[0])
    {
        cout << "YES" << endl;
        cout << s[0] << '*' << endl;
        return 0;
    }
    else if (s.back() == t.back())
    {
        cout << "YES" << endl;
        cout << "*" << s.back() << endl;
        return 0;
    }
    else if (s[s.length() - 1] == t[t.length() - 1])
    {
        cout << "YES" << endl;
        cout << '*' << s[s.length() - 1] << endl;
        return 0;
    }
    else
    {
        string ans = "";
        for (int i = 0; i < s.length() - 1; i++)
        {
            for (int j = 0; j < t.length() - 1; j++)
            {
                if (s[i] == t[j] && s[i + 1] == t[j + 1])
                {
                    ans = "";
                    ans.push_back(s[i]);
                    ans.push_back(s[i + 1]);
                    break;
                }
            }
        }
        if (ans.length())
        {
            cout << "YES" << endl;
            cout << '*' << ans << '*' << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
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