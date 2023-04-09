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
    if(n%2==0){
        cout<<-1<<endl;
        return 0;
    }
    vector<int> v;
    string bits="";
    while(n){
        if(n&1){
            bits+="1";
        }
        else{
            bits+="0";
        }
        n>>=1;
    }
    reverse(bits.begin(),bits.end());
    // cout<<"string is "<<bits<<endl;
    for(int i=0;i<bits.size()-1;i++){
        if(bits[i]=='0'){
            v.push_back(1);
        }
        else{
            v.push_back(2);
        }
    }
    cout<<v.size()<<endl;
    for(auto x:v){
        cout<<x<<" ";
    }
    cout<<endl;
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
