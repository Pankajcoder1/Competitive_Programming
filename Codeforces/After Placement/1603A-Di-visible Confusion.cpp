/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int solve(){
    int n;
    cin >> n;
    bool ok = true;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        bool found = false;
        for (int j = i + 1; j >= 2; j--)
        {
            if (x % j)
            {
                found = true;
                break;
            }
        }
        ok &= found;
    }
    if (ok)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}
int main()
{
    int testCase=1;
    cin>>testCase;
    while(testCase--){
        solve();
    }
    return 0;
}