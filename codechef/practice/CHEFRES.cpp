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
// define values.
// #define mod 1000000007
#define phi 1.618
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
#define printv(v) for(ll i=0;i<ll(v.size());i++){cout<<v[i]<<" ";} line;
// some extra
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

/* ascii value 
A=65,Z=90,a=97,z=122
*/
/*  -----------------------------------------------------------------------------------*/
// to run ctrl+b
ll solve()
{
    ll n,m;
    cin>>n>>m;
    vector<pair<ll,ll>> v;
    for(ll i=0;i<n;i++)
    {
        ll a,b;
        cin>>a>>b;
        v.pb({a,b});
    }
    srt(v);
    vl q(m),ans(m);
    forin(q,m);
    for(ll i=0;i<m;i++)
    {
        ll x=q[i];
        ans[i]=-1;
        ll low=0,high=n-1;
        ll temp=-1;
        while(low<=high)
        {
            ll mid=(low+high)/2;
            if(x>=v[mid].ff&&x<v[mid].ss)
            {
                ans[i]=0;
                break;
            }
            else if(x<v[mid].ff)
            {
                temp=v[mid].ff;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        if(ans[i]!=0)
        {
            if(temp==-1)
                ans[i]=-1;
            else
                ans[i]=temp-x;
        }
    }
    for(auto x:ans)
        cout<<x<<endl;
    return 0;
}

int main()
{
    speed;
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ll TestCase=1;
    cin>>TestCase;
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