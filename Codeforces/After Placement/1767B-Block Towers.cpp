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
    long long n;
    cin>>n;
    vector<long long> v(n-1);
    int first=0;
    cin>>first;
    for(int i=0;i<n-1;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n-1;i++){
        if(v[i]>first){
            int x=(v[i]-first+1)/2;
            first+=x;
        }
    }

    cout<<first<<endl;
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
