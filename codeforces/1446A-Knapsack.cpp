/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef vector<ll> vl;
typedef vector<bool> vb;
typedef vector<char> vc;
typedef map<ll,ll> ml;
typedef set<char>sc;
typedef set<ll> sl;
#define pan cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
// define values.
// #define mod 1000000007
#define phi 1.618
/* Bit-Stuff */
#define get_set_bits(a) (__builtin_popcount(a))
#define get_set_bitsll(a) ( __builtin_popcountll(a))
#define get_trail_zero(a) (__builtin_ctz(a))
#define get_lead_zero(a) (__builtin_clz(a))
#define get_parity(a) (__builtin_parity(a))
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
#define cc ll test;cin>>test;while(test--)
// sort
#define all(V) (V).begin(),(V).end()
#define srt(V) sort(all(V))
#define srtGreat(V) sort(all(V),greater<ll>())
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
// datatype definination
#define ordered_set tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>

/* ascii value 
A=65,Z=90,a=97,z=122
*/
/*  -----------------------------------------------------------------------------------*/

bool compare(pair<ll,ll>& a,pair<ll,ll>& b)
{
    return a.ff>b.ff;
}

ll solve()
{
    ll n,w;
    cin>>n>>w;
    vector<pair<ll,ll>> v(n);
    for(ll i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        v[i]={a,i};
    }
    ll half=(w+1)/2;
    sort(v.begin(),v.end(),compare);
    ll flag=0,sum=0;
    vector<bool>check(n+1,false);
    for(ll i=0;i<n;i++)
    {
        // cout<<"i is "<<i<<endl;
        sum+=v[i].ff;
        check[v[i].ss]=true;
        if(sum>=half&&sum<=w)
        {
            // cout<<"sum is 1 "<<sum<<endl;
            flag=1;
            break;
        }
        else if(sum>w)
        {
            // cout<<"sum till is "<<sum<<endl;
            for(ll j=0;j<n;j++)
            {
                if(check[v[j].ss]==true)
                {
                    sum-=v[j].ff;
                    check[v[j].ss]=false;
                }
                if(sum>=half&&sum<=w)
                {
                    // cout<<"sum is 2 "<<sum<<endl;
                    flag=1;
                    break;
                }
            }
            // cout<<"sum after while loop is "<<sum<<endl;
        }
    }

    if(flag==1)
    {
        vl ans;
        for(ll i=0;i<n;i++)
        {
            if(check[i]==true)
            {
                ans.pb(i+1);
            }
        }
        cout<<ans.size()<<Endl;
        for(auto x:ans)
            cout<<x<<" ";
        line;
    }
    else
    {
        cout<<-1<<endl;
    }
    return 0;
}

int main()
{
    //freopen("input.txt"a, "r", stdin);
    pan;
    // solve();
    cc
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