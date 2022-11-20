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
    ll n;
    cin >> n;
    ll a, b, c;
    cin >> a >> b >> c;
    map<char, ll> m;
    m['R'] = a;
    m['P'] = b;
    m['S'] = c;
    string s, ans = "";
    ll win = 0, lose = 0;
    cin >> s;
    for (auto x : s)
    {
        if (x == 'R')
        {
            if (m['P'] > 0)
            {
                win++;
                m['P']--;
                b--;
                ans += 'P';
            }
            else
                ans += '@';
        }
        else if (x == 'P')
        {
            if (m['S'] > 0)
            {
                c--;
                win++;
                m['S']--;
                ans += 'S';
            }
            else
                ans += '@';
        }
        else if (x == 'S')
        {
            if (m['R'] > 0)
            {
                a--;
                win++;
                m['R']--;
                ans += 'R';
            }
            else
                ans += '@';
        }
    }
    if (win >= ((n + 1) / 2))
    {
        cout<<"YES"<<endl;
        for (ll i = 0; i < n; i++)
        {
            if (ans[i] == '@')
            {
                if (a > 0)
                {
                    a--;
                    ans[i] = 'R';
                }
                else if (b > 0)
                {
                    b--;
                    ans[i] = 'P';
                }
                else
                {
                    c--;
                    ans[i] = 'S';
                }
            }
        }
        cout << ans << endl;
    }
    else{
        cout<<"NO"<<endl;
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