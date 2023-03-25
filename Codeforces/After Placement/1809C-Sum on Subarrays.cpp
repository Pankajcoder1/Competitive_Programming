/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int solve(){
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        if (k >= i)
        {
            k -= i;
            cout << 2 << " ";
            continue;
        }
        if (k == 0)
        {
            cout << -1000 << " ";
            continue;
        }
        cout << (i - k) * (-2) + 1 << " ";
        k = 0;
    }
    cout << endl;
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