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
    vector<int> v(6);
    for(int i=0;i<6;i++){
        cin>>v[i];
    }
    vector<long long> dist;
    dist.push_back(abs(v[0]-v[2])*abs(v[0]-v[2]*1LL)+abs(v[1]-v[3])*abs(v[1]-v[3]*1LL));
    dist.push_back(abs(v[0]-v[4])*abs(v[0]-v[4]*1LL)+abs(v[1]-v[5])*abs(v[1]-v[5]*1LL));
    dist.push_back(abs(v[2]-v[4])*abs(v[2]-v[4]*1LL)+abs(v[3]-v[5])*abs(v[3]-v[5]*1LL));
    sort(dist.begin(),dist.end());
    
    if(dist[0]+dist[1]==dist[2] && (v[0]==v[2] || v[0]==v[4] || v[2]==v[4]) && (v[1]==v[3] || v[1]==v[5] || v[3]==v[5])){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
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
