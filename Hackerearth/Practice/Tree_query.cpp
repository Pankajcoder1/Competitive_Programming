/*
    written by Pankaj Kumar.
    country:-INDIA
    Institute: National Institute of Technology, Uttarakhand
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
/*  --------------------MAIN PROGRAM----------------------------*/
// to run ctrl+b
const ll maxn=5e5+20;
vector<ll> adj[maxn];
ll st[maxn],ft[maxn],now=-1,is[maxn];


void dfs(int v,int p=-1){
    st[v]=++now;
    for(auto u:adj[v]){
        if(u!=p)
            dfs(u,v);
    }

    ft[v]=now+1;
}

ll mn[maxn*4],t[maxn*4],Add[maxn*4],n;

void build(ll s=0,ll e=n,ll v=1){
    t[v]=e-s;
    if(e-s<2)
        return ;
    ll mid=(s+e)/2;
    build(s,mid,2*v);
    build(mid,e,2*v+1);
}

void add(ll l ,ll r, ll val,ll s=0,ll e=n,ll v=1){
    if(l<=s&&e<=r){
        mn[v]+=val;
        Add[v]+=val;
        return ;
    }
    if(r<=s||e<=l)
        return ;
    ll mid=(s+e)/2;
    add(l,r,val,s,mid,2*v);
    add(l,r,val,mid,e,2*v+1);

    mn[v]=min(mn[2*v],mn[2*v+1]);
    t[v]=0;
    if(mn[v]==mn[2*v])
        t[v]+=t[2*v];
    if(mn[v]==mn[2*v+1])
        t[v]+=t[2*v+1];
    mn[v]+=Add[v];
}
pair<ll,ll> get(ll l, ll r,ll s=0,ll e=n,ll v=1){
    if(l<=s&&e<=r)
        return mp(mn[v],t[v]);
    if(r<=s||e<=l)
        return mp(1e9,0);
    ll mid=(s+e)/2;
    auto x=get(l,r,s,mid,2*v);
    auto y=get(l,r,mid,e,2*v+1);

    pair<ll,ll> ans={1e9,0};
    ans.ff=min({x.ff,y.ff});
    if(ans.ff==x.ff)
        ans.ss+=x.ss;
    if(ans.ff==y.ff)
        ans.ss+=y.ss;
    ans.ff+=Add[v];
    return ans;
}


ll solve()
{
    ll q;
    cin>>n>>q;
    for(ll i=0;i<n-1;i++){
        ll a,b;
        cin>>a>>b;
        a--;
        b--;
        adj[a].pb(b);
        adj[b].pb(a);
    }

    dfs(0);
    build();

    while(q--){
        ll a,b;
        cin>>a>>b;
        b--;
        if(a==1){
            add(st[b],ft[b],is[b]?-1:1);
            is[b]^=1;
        }
        else{
            if(is[b])
                cout<<0<<endl;
            else
                cout<<ll(get(st[b],ft[b]).ss)<<endl;
        }
    }
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
/* -----------------END OF PROGRAM --------------------*/
/*
* stuff you should look before submission 
* constraint and time limit
* int overflow
* special test case (n=0||n=1||n=2)
* don't get stuck on one approach if you get wrong answer
*/