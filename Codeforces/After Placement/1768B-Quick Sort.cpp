/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int solve(){
    int n,k;
    cin>>n>>k;
    int count=0;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        if(temp==count+1){
            count++;
        }
    }
    cout<<(n-count+k-1)/k<<endl;
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