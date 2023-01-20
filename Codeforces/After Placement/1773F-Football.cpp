/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int solve(){
    int n,a,b;
    cin>>n>>a>>b;
    if(n==1){
        if(a==b){
            cout<<1<<endl<<a<<":"<<b<<endl;
            return 0;
        }
        else{
            cout<<0<<endl<<a<<":"<<b<<endl;
            return 0;
        }
    }

    vector<pair<int,int>> v(n+1);
    for(int i=1;i<=n;i++){
        v[i].first=0;
        v[i].second=0;
    }
    int draw=0;

    int pos=1;
    for(;pos<=n;){
        if(a>0){
            a--;
            v[pos].first++;
            pos++;
        }
        else{
            break;
        }
    }
    if(a>0){
        v[1].first += a;
    }
    if(b){
        if(pos==n+1){
            v[1].first++;
            v[n].first--;
            v[n].second=b;
        }
        else{
            for(;pos<=n;){
                if(b>0){
                    b--;
                    v[pos].second++;
                    pos++;
                }
                else{
                    break;
                }
            }
            if(b>0){
                v[n].second += b;
            }
        }

    }
    for(int i=1;i<=n;i++){
        if(v[i].first==v[i].second){
            draw++;
        }
    }
    cout<<draw<<endl;
    for(int i=1;i<=n;i++){
        cout<<v[i].first<<":"<<v[i].second<<endl;
    }
    
    return 0;
}
int main()
{
    int testCase=1;
    while(testCase--){
        solve();
    }
    return 0;
}