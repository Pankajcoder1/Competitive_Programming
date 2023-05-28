/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int solve(){
    int n;
    string s;
    cin>>n>>s;
    int count=0,maxo=0;
    for(int i=0;i<n;i++){
        if(i==0){
            count=1;
        }
        else{
            if(s[i]==s[i-1]){
                count++;
            }
            else{
                count=1;
            }
        }
        maxo=max(maxo,count);
    }
    cout<<maxo+1<<endl;
    return 0;
}
int main()
{
    int testCase=1;
    cin>>testCase;
    while(testCase--){
        solve();
    }
    return 0;
}
