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
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int sum = 0;
    for (auto it : a)
        sum += it;
    if (sum % 2 == 0)
    {
        cout << 0 << endl;
        return 0;
    }
    int ans = 1e9;
    for (auto x : a){
        int temp=0;
        while (x % 2 == (x / 2) % 2)
        {
            temp++;
            x /= 2;
        }
        ans = min(ans, temp+1);
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