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

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        v[i]--;
    }

    vector<int> ds;

    for (int i = 0; i < n; i++)
    {
        int d = abs(v[i] - i);
        if (d == 0)
            continue;
        ds.push_back(d);
    }

    int ans = 1;
    ans = ds[0];

    for (auto x : ds)
    {
        ans = __gcd(ans, x);
    }

    cout << ans << endl;
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