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


int solve(){
    int n;
    string s;
    cin >> n >> s;
    int ans = 0;
    for(int i=0;i<n;i++)
    {
        vector<int> cnt(10);
        int distinct = 0, maxo = 0;
        for(int j=i;j<n;j++)
        {
            if (j - i >= 101)
                break;
            int c = s[j] - '0';
            if (cnt[c] == 0)
                distinct++;
            maxo=max(maxo, ++cnt[c]);
            if (maxo <= distinct)
                ans++;
        }
    }
    cout << ans << endl;
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