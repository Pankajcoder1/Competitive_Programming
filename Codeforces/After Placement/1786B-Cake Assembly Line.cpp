/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int solve(){
    long long n,h,w;
    cin >> n >> h >> w;
    vector<long long> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        b[i] = a[i] - b[i];
    }
    sort(b.begin(), b.end());
    if (b[n-1] - b[0] <= 2 * (h - w))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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