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
    vector<int> v(n);
    for(auto& x:v){
        cin>>x;
    }
    int hcf=v[0];
    for(int i=1;i<n;i++){
        hcf=__gcd(hcf,v[i]);
    }
    int operation=0;
    for(int i=0;i<n;i++){
        if(v[i]%hcf){
            cout<<-1<<endl;
            return 0;
        }
        else{
            int d=v[i]/hcf;
            while(d%2==0){
                d/=2;
                operation++;
            }
            while(d%3==0){
                d/=3;
                operation++;
            }
            if(d!=1){
                cout<<-1<<endl;
                return 0;
            }
        }
    }
    cout<<operation<<endl;
    return 0;
}
int main()
{
    long long testCase;
    testCase = 1;

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
