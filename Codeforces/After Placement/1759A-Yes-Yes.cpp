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
    string s;
    cin>>s;
    string ans="Yes";
    int pos=0;
    if(s[0]=='Y'){
        pos=0;
    }
    else if(s[0]=='e'){
        pos=1;
    }
    else if(s[0]=='s'){
        pos=2;
    }
    for(int i=0;i<s.size();i++){
        if(s[i]==ans[pos]){
            pos++;
            if(pos==3){
                pos=0;
            }
        }
        else{
            cout<<"NO"<<endl;
            return 0;
        }

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
