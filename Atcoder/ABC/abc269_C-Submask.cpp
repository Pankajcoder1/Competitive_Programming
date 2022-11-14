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
    long long i,n;
    cin >> n;
    vector<long long> ans;
    for (i = n; ; i = (i - 1) & n)
    {
        ans.push_back(i);
        if(i<=0)
            break;
    }
    reverse(ans.begin(),ans.end());
    for(auto x:ans)
        cout<<x<<endl;
    return 0;
}
int main()
{
    long long testCase=1;
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