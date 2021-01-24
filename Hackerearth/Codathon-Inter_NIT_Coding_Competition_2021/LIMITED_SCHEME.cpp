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
map<pair<ll,ll>,ll> m;
vector<ll> dfs(vector<vector<ll>>& v,ll x,vector<bool> check,ll n)
{
    vector<ll> ans;
    if(check[x]==true)
        return ans;
    if(x<1||x>n)
        return ans;
    if(x==n)
        return ans;
    check[x]=true;
    for(auto y:v[x])
    {
        if(check[y]==false)
        {
            cout<<"y is "<<y<<endl;
            ans.pb(m[mp(max(x,y),min(x,y))]);
            // cout<<"push hua for"<<y<<" and "<<x<<" cost is "<<m[mp(max(x,y),min(x,y))]<<endl;
            check[y]=true;
            dfs(v,y,check,n);
        }
    }
    return ans;
}

ll solve()
{
    ll n,m1,k;
    cin>>n>>m1>>k;
    
    vector<vector<ll>> v(n+1);
    for(ll i=0;i<m1;i++)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        v[a].pb(b);
        v[b].pb(a);
        m[mp(max(a,b),min(a,b))]=c;
    }
    ll ans1=LONG_MAX,flag=0;
    for(auto x:v[1])
    {
        // cout<<"  connected to 1 is "<<x<<endl;
        vector<bool> check(n+1,false);
        check[1]=true;
        // check[x]=true;
        vector<ll>ans;
        ans=dfs(v,x,check,n);
        ans.pb(m[mp(max(1LL,x),min(1LL,x))]);
        ll sum=0,maxo=0;
        // cout<<"now in ans "<<endl;
        for(auto y:ans)
        {
            maxo=max(maxo,y);
            sum+=y;
            // cout<<"in ans is "<<y<<endl;
        }
        sum-=maxo;
        sum+=(maxo/k);
        ans1=min(ans1,sum);
        flag++;
    }
    if(flag)
        cout<<ans1<<endl;
    else
        cout<<-1<<endl;
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
/*
5 6 3
1 2 70
2 4 190
1 3 10
3 4 438
3 5 10
4 5 10
*/