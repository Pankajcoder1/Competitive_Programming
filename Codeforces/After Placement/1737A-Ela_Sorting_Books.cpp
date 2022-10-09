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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        map<char, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[s[i]]++;
        }
        
        string ans = "";
        for (int i = 1; i <= k; i++)
        {
            int length = n / k;
            for (char ch = 'a'; ch <= 'z'; ch++)
            {
                if (length <= 0)
                {
                    ans += ch;
                    break;
                }
                length--;
                if (mp[ch])
                {
                    mp[ch]--;
                }
                else
                {
                    ans += ch;
                    break;
                }
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