/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> tree[100001];
vector<ll> degree(100001,0);

// partially accepted
ll dfs(ll n,ll root,ll value)
{
    // cout<<"in dfs root is "<<root<<" and value is "<<value<<endl;
    if(root>n||root<1)
    {
        // cout<<"out of bound "<<endl;
        return 0;
    }
    if(degree[root]==0)
    {
        // cout<<"degree 0 ho gaya "<<endl;
        return 0;
    }
    if(value%degree[root])
    {
        // cout<<"divisible nahi hai "<<endl;
        return value;
    }
    ll ans=0;
    value=value/degree[root];
    // cout<<"value change hui.new value is "<<value<<endl;
    for(auto x:tree[root])
    {
        ans+=dfs(n,x,value);
    }
    return ans;
}

long long solve()
{
    ll n;
    scanf("%lld",&n);
    ll temp;
    for(ll i=2;i<=n;i++)
    {
        // directional edges from root to child
        scanf("%lld",&temp);
        // degree[i]++;
        degree[temp]++;
        // tree[i].push_back(temp);
        tree[temp].push_back(i);
    }

    // printing degree
    // for(ll i=1;i<=n;i++)
    //     cout<<"degree of "<<i<<" is "<<degree[i]<<endl;

    // end here

    ll queries;
    scanf("%lld",&queries);
    while(queries--)
    {
        ll root,value;
        scanf("%lld%lld",&root,&value);
        ll waste=0;
        waste=dfs(n,root,value);
        printf("%lld\n",waste);
    }
    return 0;
}

int main()
{
    // #ifndef ONLINEJUDGE
    //    freopen("input.txt","r",stdin);
    //    freopen("output.txt","w",stdout);
    // #endif
    long long test=1;
    // cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
/* stuff you should look before submission 
* int overflow
* special test case (n=0||n=1||n=2)
* don't get stuck on one approach if you get wrong answer
*/