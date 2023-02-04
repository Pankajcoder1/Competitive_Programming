/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int sumOfDigits(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int solve()
{
    int n, q;
    cin >> n >> q;
    // think why we choose set here
    set<int> pos;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] > 9)
        {
            pos.insert(i);
        }
    }
    while (q--)
    {
        int choice;
        cin >> choice;
        if (choice == 1)
        {
            int l, r;
            cin >> l >> r;
            l--;
            r--;
            int lst = l;
            while (pos.size() > 0)
            {
                // do binary search
                auto it = pos.lower_bound(lst);
                if (it == pos.end() || *it > r)
                    break;
                v[*it] = sumOfDigits(v[*it]);
                int paiu = *it;
                pos.erase(it);
                cout<<"paiu is "<<paiu<<endl;
                if (v[paiu] > 9)
                    pos.insert(paiu);
                lst = paiu + 1;
            }
        }
        else
        {
            int x;
            cin >> x;
            x--;
            // cout<<"x is "<<x<<endl;
            cout << v[x] << endl;
        }
    }
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