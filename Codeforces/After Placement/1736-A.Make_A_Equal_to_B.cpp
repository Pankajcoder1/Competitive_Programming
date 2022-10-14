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
        int n;
        cin>>n;
        vector<int> a(n),b(n);
        int ans=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int one=0;
        for(auto x:a){
            if(x==1){
                one++;
            }
        }
        for(auto x:b){
            if(x==1){
                one--;
            }
        }
        // cout<<"one = "<<one<<endl;
        ans=abs(one);
        if(one<0){
            int temp=abs(one);
            for(int i=0;i<n;i++){
                if(a[i]==0 && b[i]==1 &&temp>0){
                    a[i]=1;
                    temp--;
                }
            }
        }
        else{
            int temp=abs(one);
            for(int i=0;i<n;i++){
                if(a[i]==1 && b[i]==0 && temp>0){
                    a[i]=0;
                    temp--;
                }
            }
        }


        // cout<<"ans is "<<ans<<endl;
        for(int i=0;i<n;i++){
            // cout<<a[i]<<" "<<b[i]<<endl;
            if(a[i]!=b[i]){
                ans++;
                break;
            }
        }
        cout<<ans<<endl;
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
