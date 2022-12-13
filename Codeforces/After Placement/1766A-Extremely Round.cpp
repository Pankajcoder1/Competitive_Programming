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
vector<int> v;
void cal(){
    for(int i=1;i<=100000;i*=10){
        for(int j=1;j<=9;j++){
            v.push_back(i*j);
        }
    }
    // cout<<"size of v is "<<v.size()<<endl;
    // for(auto x:v){
    //     cout<<x<<" ";
    // }

}

int solve(){
    int x;
    cin>>x;
    int ans=0;
    for(auto y:v){
        if(y<=x){
            ans++;
        }
        else{
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}
int main()
{
    long long testCase;
    cin>>testCase;
    cal();
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