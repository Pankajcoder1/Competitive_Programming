/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int solve(){
    int n, m;
    cin >> n >> m;

    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    int d1 = 0, d2 = 0;

    if (x1 - 1 >= 1)
        d1++;
    if (x1 + 1 <= n)
        d1++;
    if (y1 - 1 >= 1)
        d1++;
    if (y1 + 1 <= m)
        d1++;

    if (x2 - 1 >= 1)
        d2++;
    if (x2 + 1 <= n)
        d2++;
    if (y2 - 1 >= 1)
        d2++;
    if (y2 + 1 <= m)
        d2++;

    cout << min(d1, d2) << endl;
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