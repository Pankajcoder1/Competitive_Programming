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
    cin>>testCase;
    while(testCase--){
        int n,k;
        cin>>n>>k;
        vector<priority_queue<ll>> v(k);
        for(int i=0;i<n;i++){
            ll temp;
            cin>>temp;
            v[i%k].push(temp);
        }
        ll sum=0;
        for(auto x:v){
            sum+=x.top();
        }
        cout<<sum<<endl;
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
