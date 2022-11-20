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
    int m,s;
    cin>>m>>s;
    vector<bool> v(100+1,false);
    int maxo=0;
    for(int i=0;i<m;i++){
        int temp;
        cin>>temp;
        maxo=max(maxo,temp);
        v[temp]=true;
    }
    for(int i=maxo;i<=100;i++){
        int sum=(i*(i+1))/2;
        int temp_m=0;
        for(int j=1;j<=i;j++){
            if(v[j]==true){
                sum-=j;
                temp_m++;
            }
        }
        if(sum==s && temp_m==m){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
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
