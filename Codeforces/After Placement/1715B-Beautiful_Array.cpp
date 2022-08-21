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
        ll n,k,b,s;
        cin>>n>>k>>b>>s;
        ll mini=b*k;
        ll remain=s-(b*k);
        if(s<mini|| (k-1)*n<remain){
            cout<<-1<<endl;
            continue;
        }
        vector<ll> v(n);
        for(ll i=0;i<n;i++){
            if(b){
                v[i]=1;
                b--;
            }
            else{
                v[i]=0;
            }
        }
        if(b){
            v[n-1]+=b;
        }
        for(ll i=0;i<n;i++){
            v[i]*=k;
            s-=v[i];
        }
        if(s){
            for(ll i=0;i<n;i++){
                if(s>=(k-1)){
                    v[i]+=k-1;
                    s-=(k-1);
                }
                else{
                    v[i]+=s;
                    s=0;
                }
            }
        }
        for(ll i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
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