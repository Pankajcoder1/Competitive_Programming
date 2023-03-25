/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int solve(){
    string s;
    cin>>s;
    map<char,int> m;
    int maxo=0;
    for(auto x:s){
        m[x]++;
        maxo=max(maxo,m[x]);
    }
    if(maxo==1 || maxo==2){
        cout<<4<<endl;
    }
    else if(maxo==3){
        cout<<6<<endl;
    }
    else{
        cout<<-1<<endl;
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
