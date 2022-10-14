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
void solve(){
    int n;
    cin >> n;
    vector<int> a(n), b(n + 1, 0), c(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    b[0] = a[0];
    for (int i = 0; i + 1 < n; i++)
    {
        if(a[i]%a[i+1]==0 || a[i+1]%a[i]==0){
            b[i+1]=max(a[i],a[i+1]);
        }
        else{
            b[i+1] = (a[i] * a[i + 1])/(__gcd(a[i],a[i+1]));
        }
    }
    b[n] = a[n - 1];

    // for(auto x:b){
    //     cout<<x<<" ";
    // }
    // cout<<endl;
    
    for (int i = 0; i < n; i++)
    {
        c[i] = __gcd(b[i], b[i + 1]);
    }
    for (int i = 0; i < n; i++)
    {
        if (c[i] != a[i])
        {
            cout << "NO" << endl;
            return ;
        }
    }
    cout << "YES" << endl;
}

    int main()
    {
        long long testCase;
        cin >> testCase;
        while (testCase--)
        {
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
