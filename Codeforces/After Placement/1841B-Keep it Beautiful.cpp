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
    vector<int> v;
    int change=0;
    int temp;
    cin>>temp;
    cout<<"1";
    v.push_back(temp);
    for(int i=1;i<n;i++){
        cin>>temp;
        if(change==0){
            if(temp>=v.back()){
                v.push_back(temp);
                cout<<"1";
            }
            else{
                if(v[0]>=temp){
                    v.push_back(temp);
                    change++;
                    cout<<"1";
                }
                else{
                    cout<<"0";
                }
            }
        }
        else if(change==1){
            if(temp>=v.back() && temp<=v[0]){
                v.push_back(temp);
                cout<<"1";
            }
            else{
                cout<<"0";
            }
        }
        else{
            cout<<"0";
        }
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