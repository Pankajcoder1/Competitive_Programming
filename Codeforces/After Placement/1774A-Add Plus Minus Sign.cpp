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
    int n;
    string s;
    cin>>n>>s;
    int value=0;
    if(s[0]=='1'){
        value=1;
    }
    for(int i=1;i<n;i++){
        if(s[i]=='1'){
            if(value>0){
                cout<<"-";
                value--;
            }
            else{
                cout<<"+";
                value++;
            }
        }
        else{
            cout<<"-";
        }
    }
    cout<<endl;
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
