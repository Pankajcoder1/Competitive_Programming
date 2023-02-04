/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int solve(){
    long long n,c;
    cin>>n>>c;
    vector<long long> v(n);
    long long sum = 0;

    for(long long i=0;i<n;i++){
        cin>>v[i];
        v[i]=v[i]+i+1;
    }
    
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        sum+=v[i];
        if(sum>c){
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<n<<endl;
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