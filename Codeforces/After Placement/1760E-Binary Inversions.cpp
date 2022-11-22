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
    vector<long long> v(n);
    for(long long i=0;i<n;i++){
        cin>>v[i];
    }
    long long maxo=0,zero=0,one=0;

    for(long long i=0;i<n;i++){
        if(v[i]==0){
            maxo+=one;
            zero++;
        }
        else{
            one++;
        }
    }

    // changing zero to 1
    long long count1=0,maxo1=0;
    for(long long i=0;i<n;i++){
        if(v[i]==0){
            zero--;
            maxo1=max(maxo1,maxo-count1+zero);
            // cout<<"maxo1 is "<<maxo1<<endl;
        }
        else if(v[i]==1){
            count1++;
        }
    }
    
    // changing last one to zero
    long long count0=0,maxo2=0;
    for(long long i=n-1;i>=0;i--){
        if(v[i]==1){
            one--;
            maxo2=max(maxo2,maxo+one-count0);
            // cout<<"maxo2 is "<<maxo2<<endl;
        }
        else{
            count0++;
        }
    }
    cout<<max({maxo,maxo1,maxo2})<<endl;
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