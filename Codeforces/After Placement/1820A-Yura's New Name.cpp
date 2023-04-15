/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int solve(){
    string s;
    cin >> s;
    string s1;
    int ans = 0;
    if (s[0] == '_')
    {
        s1 = "^";
        ans++;
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '_' && s1.back() == '_')
        {
            s1 += '^';
        }
        s1 += s[i];
    }
    if (s1.size() == 1){
        s1 += '^';
    }
    if (s1.back() == '_'){
        s1 += '^';
    }
    cout << s1.size() - s.size() << endl;
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