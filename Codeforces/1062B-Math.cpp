/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;

int solve()
{
    int n;
    cin >> n;
    map<int, int> factor;
    int temp = n, ans = 1;
    int maxo = 0;
    for (int i = 2; i <= int(n); i++)
    {
        if (temp % i == 0)
        {
            ans *= i;
            while (temp % i == 0)
            {
                temp /= i;
                factor[i]++;
            }
        }
    }
    cout << ans << " ";

    int count = 0, count2 = 0;
    while (1)
    {
        maxo = 0;
        for (auto x : factor)
        {
            maxo = max(maxo, x.second);
        }
        // if you use maxo !=1 then it will give you tle, due to n=1 case
        if (maxo > 1)
        {
            count++;
            for (auto x : factor)
            {
                if (x.second % 2 == 0)
                {
                    factor[x.first] /= 2;
                }
                else
                {
                    factor[x.first]++;
                    factor[x.first] /= 2;
                    count2++;
                }
            }
        }
        else
        {
            break;
        }
    }
    if (count2)
    {
        count++;
    }
    cout << count << endl;
    return 0;
}

int main()
{
    int testCase = 1;
    while (testCase--)
    {
        solve();
    }
    return 0;
}