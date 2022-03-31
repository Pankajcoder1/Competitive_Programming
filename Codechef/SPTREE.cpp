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
typedef unsigned long long ull;
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
    stringstream pk(s);
    ll num;
    pk>>num;
    return num;
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
const ll INF=LONG_MAX;
const ll mod1=1e9+7;
const ll mod2=998244353;

ll n;

// Partial AC
// Techniques
// divide into cases, brute force, pattern finding
// sort, greedy, binary search, two pointer
// transform into graph

ll dfs1(vector<vector<ll>>&graph,bool check[],ll count_distance,ll a,ll u){
    if(u<=0||u>n)
        return 0;
    if(u==a)
        return count_distance;
    if(check[u]==true)
        return 0;
    check[u]=true;
    ll ans=0;
    count_distance++;
    for(auto x:graph[u]){
        ans+=dfs1(graph,check,count_distance,a,x);
    }
    return ans;
}

ll solve()
{
    ll k,a;
    scanf("%lld%lld%lld",&n,&k,&a);
    vl f(k);
    for(ll i=0;i<k;i++){
        scanf("%lld",&f[i]);
    }
    vector<vector<ll>> graph(n+1,vector<ll>());
    bool check[n+1]={false};
    for(ll i=0;i<n-1;i++){
        ll u,v;
        scanf("%lld%lld",&u,&v);
        graph[u].pb(v);
        graph[v].pb(u);
    }
    vector<ll> distance(k,0);
    ll maxo_distance=0;
    for(ll i=0;i<k;i++){
        memset(check,false,sizeof(check));
        distance[i]=dfs1(graph,check,0,a,f[i]);
        maxo_distance=max(maxo_distance,distance[i]);
    }
    // cout<<"calculated distance "<<endl;
    // printv(distance);
    
    vector<pair<ll,ll>> ans(n+1,{LONG_MIN,0});
    ans[0].ff=0;
    ans[0].ss=0;

    for(ll j=0;j<k;j++){
        for(ll i=1;i<=n;i++){
            memset(check,false,sizeof(check));
            ll temp_ans=dfs1(graph,check,0,f[j],i);
            temp_ans=distance[j]-temp_ans;
            if(ans[i].ss==0){
                ans[i].ff=temp_ans;
                ans[i].ss=f[j];
            }
            else if(ans[i].ff<temp_ans){
                ans[i].ff=temp_ans;
                ans[i].ss=f[j];
            }
        }
    }
    for(ll i=1;i<=n;i++){
        if(i==n){
            printf("%lld\n",ans[i].ff);
        }
        else
            printf("%lld ",ans[i].ff);
        // cout<<ans[i].ff<<" ";
    }
    // line;
    for(ll i=1;i<=n;i++){
        if(i==n){
            printf("%lld\n",ans[i].ss);
        }
        else
            printf("%lld ",ans[i].ss);
        // cout<<ans[i].ss<<" ";
    }
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
    scanf("%lld",&TestCase);
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