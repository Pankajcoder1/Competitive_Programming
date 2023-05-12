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
    int n=s.size();
    int count=0;

    int oneZero=0,zeroOne=0;
    for(int i=1;i<n;i++){
        if(s[i-1]=='0' && s[i]=='1'){
            zeroOne++;
        }
        else if(s[i-1]=='1' && s[i]=='0'){
            oneZero++;
        }
    }
    for(int i=0;i<n;i++){
        int tempZeroOne=zeroOne,tempOneZero=oneZero;
        if(i-1>=0){
            if(s[i-1]=='1'){
                // 11 -> 10
                if(s[i]=='1'){
                    tempOneZero++;
                }
                // 10 -> 11
                else{
                    tempOneZero--;
                }
            }
            else{
                // 01 -> 00
                if (s[i] == '1')
                {
                    tempZeroOne--;
                }
                // 00 -> 01
                else
                {
                    tempZeroOne++;
                }
            }
        }
        if(i+1<n){
            if(s[i]=='1'){
                // 11 -> 01
                if(s[i+1]=='1'){
                    tempZeroOne++;
                }
                //  10 -> 00
                else{
                    tempOneZero--;
                }
            }
            else{
                // 01 -> 11
                if (s[i + 1] == '1')
                {
                    tempZeroOne--;
                }
                //  00 -> 10
                else
                {
                    tempOneZero++;
                }
            }
        }
        if(tempZeroOne==tempOneZero){
            count++;
        }
    }
    cout<<count<<endl;
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