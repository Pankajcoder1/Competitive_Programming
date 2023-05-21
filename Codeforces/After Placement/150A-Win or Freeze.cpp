/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int solve(){
    long long n;
    cin>>n;
    for (long long i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            long long temp = n / i;
            for (long long j = 2; j * j <= temp; j++)
            {
                if (temp % j == 0)
                {
                    cout << 1 << endl
                         << i * j << endl;
                    return 0;
                }
            }
            cout << 2;
            return 0;
        }
    }
    cout << 1 << endl
         << 0;
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