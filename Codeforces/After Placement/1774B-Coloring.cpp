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
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> v(m);
    for(int i=0;i<m;i++){
        cin>>v[i];
    }
    int count=0;
    for(auto x:v){
        if(x>(n+k-1)/k){
            cout<<"NO"<<endl;
            return 0;
        }
        else if(x==(n+k-1)/k && n%k!=0){
            count++;
        }
    }
    if(count>n%k){
        cout<<"NO"<<endl;
        return 0;
    }
    cout<<"YES"<<endl;
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
