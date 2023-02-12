/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int to_number(string s){
    int ans=0;
    for(auto ch:s){
        ans*=10;
        ans+=ch-'0';
    }
    return ans;
}

int solve(){
    int n;
    cin>>n;
    string s=to_string(n);
    string x="",y="";
    bool flag=false;
    for(auto ch:s){
        if(ch=='0' || ch=='2' || ch=='4' || ch=='6' || ch=='8'){
            int temp=ch-'0';
            temp/=2;
            x+=temp+'0';
            y+=temp+'0';
        }
        else{
            int temp=ch-'0';
            temp/=2;
            if(flag){
                x+=temp+'0';
                y+=temp+1+'0';
                flag=false;
            }
            else{
                x+=temp+1+'0';
                y+=temp+'0';
                flag=true;
            }
        }
    }
    int finalX=to_number(x);
    int finalY=to_number(y);
    cout<<finalX<<" "<<finalY<<endl;
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