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
        long long n;
        string s;
        cin>>n>>s;
        long long sum=0;
        vector<long long> current(n,0), change(n,0);
        for(long long i=0;i<n;i++){
            if(s[i]=='L'){
                current[i]=max(0LL,i);
            }
            else{
                current[i]=max(0LL,n-i-1);
            }
            change[i]=n-1-current[i];
            // gain
            change[i]=change[i]-current[i];
            sum+=current[i];
        }
        // cout<<"current "<<endl;
        // for(auto x:current){
        //     cout<<x<<" ";
        // }
        // cout<<endl;
        // cout<<"change "<<endl;
        // for(auto x:change){
        //     cout<<x<<" ";
        // }
        // cout<<endl;


        sort(change.begin(),change.end(), greater<long long>());
        for(long long k=1;k<=n;k++){
            if(change[k-1]>0){
                sum+=change[k-1];
            }
            cout<<sum<<" ";
        }
        cout<<endl;
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