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
    int n,m;
    cin>>n>>m;
    map<int,int> row,col;
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        row[a]++;
        col[b]++;
    }
    int countR=0,countC=0;
    for(int i=1;i<=n;i++){
        if(row[i]==0)
            countR++;
        if(col[i]==0)
            countC++;
    }
    if (countR && countC)
    {
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