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

int main()
{
    long long testCase;
    cin >> testCase;
    while (testCase--)
    {
        int n;
        cin >> n;
        vector<int> v(n), ans(n);
        for (auto &it : v)
            cin >> it;
        ans[0] = v[0];
        bool flag = true;
        for (int i = 1; i < n; i++)
        {
            int temp1 = ans[i - 1] + v[i];
            int temp2 = ans[i - 1] - v[i];
            if (temp1 >= 0 && temp2 >= 0 && temp1 != temp2)
            {
                cout << -1 << endl;
                flag = false;
                break;
            }
            ans[i] = max(temp1, temp2);
        }
        if (flag)
        {
            for (auto it : ans)
                cout << it << " ";
            cout << endl;
        }
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
