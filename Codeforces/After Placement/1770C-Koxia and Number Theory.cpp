/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int solve(){
    long long n;
    cin>>n;
    vector<long long> v(n);
    for(long long i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    // step 1
    for(long long i=0;i+1<n;i++){
        if(v[i]==v[i+1]){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    // step 2
    for(int i=2;i<=n;i++){
        vector<int>count(i,0);
        for(int j=0;j<n;j++){
            count[v[j]%i]++;
        }
        if(*min_element(count.begin(),count.end())>=2){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    
    cout<<"YES"<<endl;
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