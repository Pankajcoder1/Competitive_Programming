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
/* ascii value 
A=65,Z=90,a=97,z=122
*/
/*  -----------------------------------------------------------------------------------*/

int prime(ll num)
{
    for(ll i=2;i<=sqrt(num);i++)
    {
        if(num%i==0)
            return 0;
    }
    return 1;
}

ll solve()
{
    ll n;
    cin>>n;
    ll ans=0;
    for(ll i=2;i<100000;i++)
    {
        // cout<<"i is "<<i<<" "<<prime(i)<<endl;
        if(prime(i)==1&&((i-1)%(n-1))==0)
        {
            ans=(i-1)/(n-1);
            if(prime(ans)==0)
            {
                break;
            }
        }
    }
    vl v(n,0);
    for(ll i=0;i<n;i++)
    {
        if(i==(n-1))
            v[i]=1;
        else
            v[i]=ans;
    }
    vector<vector<ll>> matrix(n,vector<ll>(n,0));
    for(ll i=0;i<n;i++)
    {
        rotate(v.begin(),v.begin()+1,v.end());
        for(ll j=0;j<n;j++)
        {
            matrix[i][j]=v[j];
        }
    }
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
            cout<<matrix[i][j]<<" ";
        line;
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
}
