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
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int ans=0;
        for(int i=0;i+1<n;i++){
            ans=max(ans,v[i]-v[i+1]);
        }
        ans=max(ans,v[n-1]-v[0]);

        int mini=INT_MAX;
        for(int i=0;i+1<n;i++){
            mini=min(mini,v[i]);
        }
        ans=max(ans,v[n-1]-mini);

        int maxo=0;
        for(int i=1;i<n;i++){
            maxo=max(maxo,v[i]);
        }
        ans=max(ans,maxo-v[0]);
        cout<<ans<<endl;
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