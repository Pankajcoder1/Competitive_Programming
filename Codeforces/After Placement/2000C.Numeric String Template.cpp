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
    vector<int> v(n,0);
    for(auto &x:v){
        cin>>x;
    }
    int m;
    cin>>m;
    while(m--){
        string s;
        vector<int>v2(26,INT_MAX);
        cin>>s;
        bool flag = true;

        if(s.length()!=n){
            flag=false;
        }
        else{
            for(int i=0;i<n;i++){
                if(v2[s[i]-'a']!=INT_MAX && v2[s[i]-'a']!=v[i]){
                    flag=false;
                }
                v2[s[i]-'a']=v[i];
            }
            set<int>t;
            int count=0;
            for(int i=0;i<26;i++){
                if(v2[i]!=INT_MAX){
                    count++;
                    t.insert(v2[i]);
                }
            }
            if(t.size()!=count){
                flag=false;
            }
        }
        
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
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