/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto &x1:v){
        cin>>x1;
    }
    int minOdd=INT_MAX;
    for(auto x1:v){
        if(x1&1){
            minOdd=min(minOdd,x1);
        }
    }
    bool makeEven=true,makeOdd=true;
    // for odd
    for(auto x:v){
        if(!(x&1) && x<=minOdd){
            makeOdd=false;
        }
    }
    // make even
    for(auto x:v){
        if((x&1) && x<=minOdd){
            makeEven=false;
        }
    }
    if(makeOdd || makeEven){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
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