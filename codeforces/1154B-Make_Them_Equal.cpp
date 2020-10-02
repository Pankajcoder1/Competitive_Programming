/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef set<pair<int,int>> spi;
typedef set<pair<ll,ll>> spl;
typedef vector<pair<int,int>> vpi;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<bool> vb;
typedef vector<char> vc;
typedef vector<pair<ll,ll>> vpl;
typedef vector<string> vs;
typedef map<ll,ll> ml;
typedef set<string> ss;
typedef set<char>sc;
typedef set<int> si;
typedef set<ll> sl;
#define pan cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
// define values.
#define mod 1000000007
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
#define loop(i,start,end) for(ll i=ll(start);i<ll(end);i++)
#define loop0(num) for(ll i=0;i<ll(num);i++)
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

ll power(ll x,ll y)
{
    ll res=1;
    while(y>0)
    {
        if(y%2==1)res*=x;
        y/=2; x*=x;
    }
    return res;
}
/* ascii value 
A=65,Z=90,a=97,z=122
*/
/*  -----------------------------------------------------------------------------------*/


ll solve()
{
    ll n;
    cin>>n;
    set<ll> s;
    ll temp;
    for(ll i=0;i<n;i++)
    {
        cin>>temp;
        s.insert(temp);
    }
    if(s.size()>3)
    {
        cout<<-1<<endl;
        return 0;
    }
    if(s.size()==1)
    {
        cout<<0<<endl;
        return 0;
    }
    if(s.size()==2)
    {
        vl ans;
        for(auto x:s)
            ans.pb(x);
        if(abs(ans[1]-ans[0])%2==0)
            cout<<abs(ans[1]-ans[0])/2<<endl;
        else
            cout<<abs(ans[1]-ans[0])<<endl;
        return 0;
    }
    vl ans;
    for(auto x:s)
        ans.pb(x);
    srt(ans);
    if(ans[0]+ans[2]==2*ans[1])
    {
        cout<<abs(ans[1]-ans[0])<<endl;
    }
    else
        cout<<-1<<endl;
    return 0;
}

int main()
{
    //freopen("input.txt"a, "r", stdin);
    pan
    solve();
}
