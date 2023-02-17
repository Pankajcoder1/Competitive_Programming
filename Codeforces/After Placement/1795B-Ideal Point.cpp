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
    vector<pair<int,int>> v(n);
    map<int,int> m;
    int countOfMaxo=0;
    for(int i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
        for(int j=v[i].first;j<=v[i].second;j++){
            m[j]++;
        }
    }
    // cout<<"k frequency is "<<m[k]<<endl;
    bool flag=true;
    for(int i=1;i<=50;i++){
        if(i!=k && m[i]>=m[k]){
            flag=false;
            int count=0;
            for(auto x:v){
                if(x.second>=i && x.first<=i && (x.second<k || x.first>k)){
                    count++;
                }
            }
            if(count>=(m[i]-m[k]+1)){
                flag=true;
            }
            else{
                flag=false;
                break;
            }
        }
    }    
    if(flag){
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
