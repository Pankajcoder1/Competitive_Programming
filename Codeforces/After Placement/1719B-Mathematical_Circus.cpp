/*
    written by Pankaj Kumar.
    country:-INDIA
    Institute: National Institute of Technology, Uttarakhand
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
        ll n,k;
        cin>>n>>k;
        if(k%2==0 && k%4==0){
            cout<<"NO"<<endl;
        }
        else if(k&1){
            cout<<"YES"<<endl;
            for(ll i=1;i<=n;i+=2){
                cout<<i<<" "<<i+1<<endl;
            }
        }
        else{
            cout<<"YES"<<endl;

            for(ll i=2;i<=n;i+=2){
                if(i%4==0){
                    cout<<i-1<<" "<<i<<endl;
                }
                else{
                    cout << i << " " << i - 1 << endl;
                }
            }
        }

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