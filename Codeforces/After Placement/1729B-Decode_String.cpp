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
        string s;
        int n;
        cin >> n >> s;
        string ans = "";
        for (int i = 0; i < n; i++)
        {
            if (i + 2 < n && s[i + 2] == '0' && (i+3>=n || s[i+3]!='0'))
            {
                int temp = (s[i] - '0') * 10 + (s[i + 1] - '0');
                ans += (char)(temp + 'a' - 1);
                i += 2;
            }
            else
            {
                int temp = s[i] - '0';
                ans += (char)(temp + 'a' - 1);
            }
        }
        cout << ans << endl;
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