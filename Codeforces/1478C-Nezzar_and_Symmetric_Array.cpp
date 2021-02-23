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

ll solve()
{
    ll n;
    cin>>n;
    n*=2;
    vl v(n);
    forin(v,n);
    map<ll,ll> m;
    for(auto x:v)
    {
        m[x]++;
        if(x&1)
        {
            no
            return 0;
        }
    }
    for(auto x:m)
    {
        if(x.ss&1)
        {
            no
            return 0;
        }
    }
    n/=2;
    if(sz(m)!=n)
    {
        no
        return 0;
    }
    vl ans(n);
    ll pos=0;
    for(auto x:m)
    {
        if(x.ff>0)
        {
            ans[pos++]=x.ff/2;
        }
    }
    map<ll,ll> m2;
    ll sum=0;
    srtGreat(ans);
    ll len=n;
    for(ll i=0;i<n;i++)
    {
        ll temp=(ans[i]-sum);
        if(temp%len)
        {
            no
            return 0;
        }
        else
            temp/=len;
        sum+=temp;
        len--;
        m2[temp]++;
        if(temp<=0)
        {
            no
            return 0;
        }
    }
    if(sz(m2)==n)
    {
        for(auto x:m2)
        {
            if(x.ss>1)
            {
                no
                return 0;
            }
        }
        yes
    }
    else
        no
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

/* stuff you should look before submission 
* int overflow
* special test case (n=0||n=1||n=2)
* don't get stuck on one approach if you get wrong answer
*/