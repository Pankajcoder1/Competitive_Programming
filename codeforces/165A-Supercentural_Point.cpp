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
#define cc ll test;cin>>test;while(test--)
// sort
#define all(V) (V).begin(),(V).end()
#define srt(V) sort(all(V))
#define srtGreat(V) sort(all(V),greater<ll>())
#define printv(v) for(ll i=0;i<ll(v.size());i++){cout<<v[i]<<" ";} line;
// some extra
#define sz(V) ll(V.size())
/* ONLINE JUDGE */
// #ifdef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
// #endif
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

ll solve()
{
    ll n;
    cin>>n;
    vector<pair<ll,ll>> v;
    ll count=0;
    for(ll i=0;i<n;i++)
    {
        ll a,b;
        cin>>a>>b;
        v.pb({a,b});
    }
    for(ll i=0;i<n;i++)
    {
        ll flag1=0,flag2=0,flag3=0,flag4=0;
        // cout<<"vi is "<<v[i].ff<<" and "<<v[i].ss<<endl;
        for(ll j=0;j<n;j++)
        {
            if(i!=j)
            {
                // cout<<"vj is "<<v[j].ff<<" and is "<<v[j].ss<<endl;
                if((v[i].ff==v[j].ff&&v[i].ss>v[j].ss)) flag1++;
                if((v[i].ff==v[j].ff&&v[i].ss<v[j].ss)) flag2++;
                if((v[i].ff>v[j].ff&&v[i].ss==v[j].ss)) flag3++;
                if((v[i].ff<v[j].ff&&v[i].ss==v[j].ss)) flag4++;
            }
        }
        if(flag1>0&&flag2>0&&flag3>0&&flag4>0)
        {
            // cout<<"element is "<<v[i].ff<<" and "<<v[i].ss<<endl;
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}

int main()
{
    speed;
    //freopen("input.txt"a, "r", stdin);
    solve();
    // cc
    // {
    //     solve();
    // }
}

/* stuff you should look before submission 
* int overflow
* special test case (n=0||n=1||n=2)
* don't get stuck on one approach if you get wrong answer
*/