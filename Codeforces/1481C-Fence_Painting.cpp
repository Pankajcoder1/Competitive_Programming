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
/*  --------------------MAIN PROGRAM----------------------------*/
// to run ctrl+b
const ll N=300010;
int n, m;
int a[N], b[N], c[N], ans[N];
vector<int> v[N];
ll solve()
{
    ll n,m;
    cin>>n>>m;
    for(ll i=1;i<=n;i++)
        v[i].clear();
    forin(a,n);
    forin(b,n);
    forin(c,m);
    for(ll i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
            v[b[i]].pb(i);
        }
    }
    ll last=-1;
    if(v[c[m-1]].size()>0)
    {
        last=v[c[m-1]].back();
        v[c[m-1]].pop_back();
    }
    else
    {
        for(ll i=0;i<n;i++)
        {
            if(b[i]==c[m-1])
            {
                last=i;
                break;
            }
        }
    }
    if(last==-1)
    {
        no
        return 0;
    }
    ans[m-1]=last;
    for(ll i=0;i<m-1;i++)
    {
        if(v[c[i]].size()==0)
        {
            ans[i]=last;
        }
        else
        {
            ans[i]=v[c[i]].back();
            v[c[i]].pop_back();
        }
    }
    for(ll i=1;i<=n;i++)
    {
        if(sz(v[i])>0)
        {
            no
            return 0;
        }
    }
    yes
    for(ll i=0;i<m;i++)
        cout<<ans[i]+1<<" ";
    line;
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
    cin>>TestCase;
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