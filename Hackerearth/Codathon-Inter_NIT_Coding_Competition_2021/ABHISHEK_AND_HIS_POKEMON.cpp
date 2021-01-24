/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long ll ;
typedef vector<ll> vl;
#define speed cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
/*  Abbrevations  */
#define ff first
#define ss second
#define mp make_pair
#define line cout<<endl;
#define pb push_back
#define Endl "\n"
// loops
#define forin(arr,n) for(ll i=0;i<n;i++) cin>>arr[i];
// Some print
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
// sort
#define all(V) (V).begin(),(V).end()
#define srt(V) sort(all(V))
#define srtGreat(V) sort(all(V),greater<ll>())
// some extra
#define printv(v) for(ll i=0;i<ll(v.size());i++){cout<<v[i]<<" ";} line;
#define precision(x) cout<<fixed<<setprecision(x);
#define sz(V) ll(V.size())
// template
template <typename T>
T mymax(T x,T y)
{
    return (x>y)?x:y;
}
// function
void kickstart()
{
    ll test;
    cin>>test;
    for(ll i=1;i<=test;i++)
    {
        cout<<"Case #"<<i<<": ";
    }
}
ll power(ll x,ll y,ll mod)
{
    ll res=1;
    // x=x%mod;
    while(y>0)
    {
        if(y%2==1)
        {
            res*=x;
            // res=res%mod;
        }
        y/=2; x*=x; // x=x%mod;
    }
    return res;
}
ll str_to_num(string s)
{
    return stoi(s);
}

string num_to_str(ll num)
{
    return to_string(num);
}
// datatype definination
#define ordered_set tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>
class Point
{
    public:
        ll x;
        ll y;
        ll z;
        ll getsum()
        {
            return x+y+z;
        }
};
/* ascii value 
A=65,Z=90,a=97,z=122
*/
/*  -----------------------------------------------------------------------------------*/
// to run ctrl+b
// partially accepted

vector<ll> ans;
vector<bool> check(200001,false);

void dfs(vector<vector<ll>>& graph,ll num,ll n)
{
    if(check[num]==true)
        return ;
    if(num>n)
        return ;
    if(check[num]==false)
    {
        for(auto x:graph[num])
        {
            check[x]=true;
            ans.pb(x);
            dfs(graph,x,n);
        }
    }
    return ;
}

ll solve()
{
    ll n;
    cin>>n;
    vector<char> ch(n+1);
    ch[0]='a';
    for(ll i=1;i<n+1;i++)
        cin>>ch[i];
    vl v(n+1,0);
    
    vector<vector<ll>> graph(n+1);
    for(ll i=2;i<n+1;i++)
    {
        cin>>v[i];
        graph[v[i]].pb(i);
    }
    ans.pb(1);
    check[1]=true;
    for(auto x:graph[1])
    {
        if(check[x]==false)
        {
            ans.pb(x);
            // cout<<"from 1 se "<<x<<endl;
            dfs(graph,x,n);
        }
    }
    ll N=0,F=0;
    ll count=0,flag=0;
    for(auto x:ans)
    {
        if(ch[x]=='F')
        {
            F++;
            count+=N;
        }
        else
        {
            flag=1;
            N++;
        }
    }
    cout<<max(0LL,count/n)<<endl;
    // cout<<"now in ans is "<<endl;
    // for(auto x:ans)
    //     cout<<x<<" ";
    // line;
    return 0;
}

int main()
{
    speed;
    /* #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif */
    ll TestCase=1;
    // cin>>TestCase;
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