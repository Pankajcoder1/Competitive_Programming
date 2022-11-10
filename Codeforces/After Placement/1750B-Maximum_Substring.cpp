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
    string s;
    cin>>n>>s;
    vector<long long> oneV,zeroV;
    long long total0=0,total1=0;
    
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            long long zero=1;
            total0++;
            while(i+1<n&&s[i+1]=='0'){
                zero++;
                i++;
                total0++;
            }
            zeroV.push_back(zero);
        }
        else{
            long long one=1;
            total1++;
            while(i+1<n&&s[i+1]=='1'){
                one++;
                i++;
                total1++;
            }
            oneV.push_back(one);
        }
    }
    long long maxo=total0*total1;
    for(auto x:oneV){
        maxo=max(maxo,x*x);
    }
    for(auto x:zeroV){
        maxo=max(maxo,x*x);
    }
    cout<<maxo<<endl;
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
