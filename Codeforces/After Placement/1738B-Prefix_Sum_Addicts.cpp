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
        ll n,k;
        cin>>n>>k;
        vector<ll> s(k);
        for(ll i=0;i<k;i++){
            cin>>s[i];
        }
        if(k==1){
            cout<<"YES"<<endl;
        }
        else{
            vector<ll> v(n);
            ll j=n-1;
            for(int i=k-1;i>=1;i--){
                v[j]=s[i]-s[i-1];
                j--;
            }
            while(j>=0){
                v[j]=v[j+1];
                s[0]-=v[j];
                j--;
            }
        
            v[0]+=s[0];
            if(is_sorted(v.begin(),v.end())){
                cout << "YES" << endl;
            }
            else{
                cout<<"NO"<<endl;
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
