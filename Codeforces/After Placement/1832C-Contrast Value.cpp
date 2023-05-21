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
    int ans=0;
    vector<int> a(n);
    for(auto &x:a){
        cin>>x;
    }
    a.resize(unique(a.begin(), a.end()) - a.begin());
    n = (int)a.size();
    for (int i = 0; i < n; i++)
    {
        if (i == 0 || i == n - 1 || (a[i]>a[i-1] && a[i]>a[i+1]) || (a[i]<a[i-1] && a[i]<a[i+1]))
        {
            ans += 1;
        }
    }
    cout << ans << '\n';
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