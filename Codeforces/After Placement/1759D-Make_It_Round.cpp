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
    long long n,m;
    cin>>n>>m;
    long long two=0,five=0,temp=n;
    while(n%2==0){
        two++;
        n/=2;
    }
    while(n%5==0){
        five++;
        n/=5;
    }
    long long k=1;
    if(two>five){
        for(long long i=1;i<=two-five && k*5<=m;i++){
            k*=5;
        }
    }
    else{
        for(long long i=1;i<=five-two && k*2<=m;i++){
            k*=2;
        }
    }
    while(k*10<=m){
        k*=10;
    }
    cout<<(m/k)*k*temp<<endl;
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