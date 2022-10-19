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
    char ch;
    cin>>n>>ch;
    string s;
    cin>>s;
    if(ch=='g'){
        cout<<0<<endl;
        return 0;
    }

    int first=-1;
    int ans=0;
    for(int i=0;i<n;i++){
        if(s[i]=='g'){
            first=i;
            break;
        }
    }
    for(int i=0;i<n;i++){
        if(s[i]==ch){
            int count=0,flag=0;
            for(int j=i+1;j<n;j++){
                count++;
                if(s[j]=='g'){
                    flag++;
                    break;
                }
            }
            i=i+count;
            if(flag){
                ans=max(ans,count);
            }
            else{
                ans=max(ans,count+1+first);
            }
        }
    }
    cout<<ans<<endl;        
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