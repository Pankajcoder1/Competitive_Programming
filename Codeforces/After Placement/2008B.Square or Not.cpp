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
    string s;
    cin>>s;
    int temp=sqrt(n);
    if(temp*temp==n){
        string my_string = "";
        for(int i=1;i<=temp;i++){
            my_string+="1";
        }
        for (int i = 1; i <= temp-2; i++)
        {
            my_string += "1";
            for(int j=1;j<=temp-2;j++){
                my_string+="0";
            }
            my_string += "1";
        }
        for (int i = 1; i <= temp; i++)
        {
            my_string += "1";
        }
        if(my_string==s){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    else{
        cout<<"No"<<endl;
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