/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int solve()
{
    int n;
    cin >> n;
    vector<int> d(n);
    for (int i = 0; i < n; i++){
        cin >> d[i];
    }

    sort(d.begin(), d.end());

    long long num =(long long) d[0] * d[n - 1];
    vector<int> b;
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            b.push_back(i);
            if (i != num / i)
                b.push_back(num / i);
        }
    }
    sort(b.begin(), b.end());
    
    if (b == d)
        cout << num << endl;
    else
        cout << -1 << endl;
    return 0;
}
int main()
{
    int testCase = 1;
    cin >> testCase;
    while (testCase--)
    {
        solve();
    }
    return 0;
}