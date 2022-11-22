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
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    
    int ans=0;
    for(int i=0;i<n;i++){
        if(i==0){
            int j=i+1;
            while(j<n&&v[j]==v[i]){
                j++;
            }
            if(j>=n || v[j]>v[i]){
                ans++;
            }
            i=j-1;
        }
        else if(i==n-1){
            if(v[i-1]>v[i]){
                ans++;
            }
        }
        else{
            if(v[i]<v[i-1]){
                int j=i+1;
                while(j<n && v[j]==v[i]){
                    j++;
                }
                if(j>=n || v[j]>v[i]){
                    ans++;
                }
                i=j-1;
            }
        }
    }
    if(ans==1){
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
