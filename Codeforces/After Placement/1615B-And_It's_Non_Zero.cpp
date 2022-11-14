/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


/* ascii value
A=65,Z=90,a=97,z=122
*/

// Techniques :
// divide into cases, brute force, pattern finding
// sort, greedy, binary search, two pointer
// transform into graph

ll solve()
{
    // pre calculation
    vector<ll> bit_count(19, 0);
    vector<vector<ll>> bit_count_map(200001);
    for (ll i = 0; i <= 18; i++)
    {
        bit_count_map[0].push_back(0);
    }
    for (ll i = 1; i <= 200000; i++)
    {
        ll pos = 0;
        ll temp = i;
        while (temp)
        {
            if (temp & 1)
            {
                bit_count[pos]++;
            }
            temp >>= 1;
            pos++;
        }
        for (ll j = 0; j <= 18; j++)
        {
            bit_count_map[i].push_back(bit_count[j]);
        }
    }

    ll test;
    cin >> test;
    while (test--)
    {
        ll l, r;
        cin >> l >> r;
        ll total = abs(l - r) + 1;

        ll mini = LONG_MAX;
        for (ll bits = 0; bits <= 18; bits++)
        {
            ll total_set_bit = 0;
            total_set_bit = bit_count_map[r][bits] - bit_count_map[l - 1][bits];
            ll mini_temp = total - total_set_bit;
            mini = min(mini, mini_temp);
            // cout<<"total_set_bit : "<<total_set_bit<<endl;
        }

        cout << mini << endl;
    }
    return 0;
}

int main()
{
    long long testCase;
    cin>>testCase;
    while(testCase--){
        solve();
    }
    return 0;
}
/* -----------------END OF PROGRAM --------------------*/
/*
* stuff you should look before submission
* constraint and time limit
* int overflow
* special test case (n=0||n=1||n=2)
* don't get stuck on one approach if you get wrong answer
*/