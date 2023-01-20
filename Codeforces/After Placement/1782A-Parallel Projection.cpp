/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int solve(){
    int w,d,h,a,b,f,g;
    cin>>w>>d>>h>>a>>b>>f>>g;
    cout<<min({b+h+g+abs(f-a),abs(d-b)+h+abs(d-g)+abs(a-f),a+h+f+abs(g-b),abs(w-a)+h+abs(w-f)+abs(b-g)})<<endl;
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