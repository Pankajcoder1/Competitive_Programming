/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int solve(){
    int n;
    long long c, d;
    cin >> n >> c >> d;
    vector<int> a(n);
    map<int, int> mp;

    for (int j = 0; j < n; j++)
    {
        cin >> a[j];
        mp[a[j]]++;
    }
    long long ans = n * c + d;
    int cnt = 0;
    for (auto x : mp)
    {
        cnt++;
        ans = min(ans, (n - cnt) * c + (x.first - cnt) * d);
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