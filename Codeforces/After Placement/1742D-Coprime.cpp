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


int main()
{
    long long testCase;
    cin>>testCase;
    while(testCase--){
        vector<int> v(1001,0);
        int n;
        cin>>n;
        int maxo=-1;
        for(int i=1;i<=n;i++){
            int temp;
            cin>>temp;
            v[temp]=i;
        }
        for(int i=1;i<=1000;i++){
            for(int j=1;j<=1000;j++){
                if(v[i] && v[j] && int(__gcd(i,j))==1){
                    maxo=max(maxo,v[i]+v[j]);
                }
            }
        }
        cout<<maxo<<endl;
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
