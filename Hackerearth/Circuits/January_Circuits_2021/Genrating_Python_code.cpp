/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define speed cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
// partially accepted.
ll solve()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    string temp=s;
    temp+='@';
    vector<pair<char,ll>> v;
    char pre=s[0],count=1;
    ll flag=1;
    for(ll i=1;i<=n;i++)
    {
        if(temp[i]!=pre)
        {
            flag=0;
            v.push_back({pre,count});
            pre=temp[i];
            count=1;
        }
        else
        {
            flag=1;
            count++;
        }
    }
    if(flag)
        v.push_back({pre,count});
    cout<<"null"<<endl;
    cout<<1<<endl;
    cout<<"print(\""<<v[0].first<<"\"*"<<v[0].second;
    for(ll i=1;i<v.size();i++)
    {
        cout<<"+\""<<v[i].first<<"\"*"<<v[i].second;
    }
    cout<<")";
    return 0;
}

int main()
{
    speed;
    ll TestCase=1;
    while(TestCase--)
    {
        solve();
    }
}
/* stuff you should look before submission 
* int overflow
* special test case (n=0||n=1||n=2)
* don't get stuck on one approach if you get wrong answer
*/