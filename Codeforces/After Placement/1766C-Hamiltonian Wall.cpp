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
    cin>>n;
    vector<vector<char>> v(2,vector<char>(n));
    for(int i=0;i<2;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    bool row1=true,row2=true;
    for(int i=0;i<n;i++){
        if(v[0][i]=='B' && v[1][i]=='B'){
            swap(row1,row2);
        }
        else if(v[0][i]=='B'){
            row2=false;
        }
        else if(v[1][i]=='B'){
            row1=false;
        }
        else{
            cout<<"NO"<<endl;
            return 0;
        }
    }
    if(row1 || row2){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
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