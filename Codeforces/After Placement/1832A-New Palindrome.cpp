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
    if (s.size() % 2) {
        s.erase(s.begin() + s.size() / 2);
    }
    if (s != std::string(s.size(), s[0])) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
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