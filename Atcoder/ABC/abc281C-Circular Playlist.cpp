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

int solve()
{
    long long n, t;
    cin>>n>>t;
    vector<long long> v(n);
    long long sum=0;
    for (long long i = 0; i < n; i++)
    {
        cin >> v[i];
        sum+=v[i];
    }
    t%=sum;
    if(t==0){
        cout<<n<<" "<<v[n-1]<<endl;
    }
    for(long long i=0;i<n;i++){
        if(t<=v[i]){
            cout<<i+1<<" "<<t<<endl;
            break;
        }
        else{
            t-=v[i];
        }
    }

    return 0;
}
int main()
{
    long long testCase = 1;
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
