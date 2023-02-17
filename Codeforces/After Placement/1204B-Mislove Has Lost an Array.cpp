/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int solve(){
    int n, l, r;
    cin >> n >> l >> r;
    int mini = 0, maxo = 0;
    int t = 1;
    for (int x = 1; x <= l; x++){
        mini += t, t *= 2;
    }
    mini += (n - l);
    t=1;
    for(int x = 1; x <= r; x++){
        maxo += t, t *= 2;
    }
    maxo += (n - r) * t / 2;
    cout << mini << " " << maxo << endl;
    return 0;
}
int main()
{
    int testCase=1;
    while(testCase--){
        solve();
    }
    return 0;
}