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
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    long long ans = 0, cur_min = 1;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] >= cur_min)
        {
            ans += a[i] - cur_min;
            cur_min++;
        }
    }
    cout << ans << "\n";
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