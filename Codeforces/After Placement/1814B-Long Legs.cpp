/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int solve(){
    long long k,a,b;
    cin >> a >> b;
    k = a + b;
    for (int i = 2; i <= 100000; i++)
    {
        k = min(k, (a + i - 1) / i + (b + i - 1) / i + i - 1);
    }
    cout << k << endl;
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