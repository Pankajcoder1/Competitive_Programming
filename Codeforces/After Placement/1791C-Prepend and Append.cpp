/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int solve(){
    int n;
    string str;
    cin>>n>>str;
    int l=0,r=n-1;
    while(true){
        if(l==r){
            cout<<1<<endl;
            return 0;
        }
        if(l>r){
            cout<<0<<endl;
            return 0;
        }
        if(str[l]!=str[r]){
            l++;
            r--;
        }
        else{
            cout<<(r-l+1)<<endl;
            return 0;
        }
    }
    
    return 0;
}
int main()
{
    int testCase;
    cin>>testCase;
    while(testCase--){
        solve();
    }
    return 0;
}