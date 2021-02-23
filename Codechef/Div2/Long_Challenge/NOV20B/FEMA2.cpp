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
/* ascii value 
A=65,Z=90,a=97,z=122
*/
/*  -----------------------------------------------------------------------------------*/


ll solve()
{
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    ll count=0;
    ll iron=0,magnet=0;
    vl dot(n,0);
    ll dot_count=0;
    for(ll i=0;i<n;i++)
    {
        if(s[i]==':')
            dot_count++;
        dot[i]=dot_count;
    }
    while(iron<n&&magnet<n)
    {
        while(1)
        {
            // cout<<"first "<<endl;
            if(s[iron]=='I'||s[iron]=='X'||iron>=n)
                break;
            iron++;
        }
        while(1)
        {
            // cout<<"second "<<endl;
            if(s[magnet]=='M'||s[magnet]=='X'||magnet>=n)
                break;
            magnet++;
        }
        if(iron>=n||magnet>=n)
            break;
        if(s[iron]=='X'||s[magnet]=='X')
        {
            ll temp=max(iron,magnet);
            iron=temp+1;
            magnet=temp+1;
        }
        else
        {
            // cout<<"iron and magnet is "<<iron<<" "<<magnet<<" and sheet1 is "<<sheet1<<" and sheet 2 is "<<sheet2<<endl;
            ll power_m=k+1-abs(iron-magnet);
            // cout<<"power_m is "<<power_m<<endl;
            // cout<<dot[max(iron,magnet)]<<" difff is "<<dot[min(iron,magnet)]<<endl;
            power_m-=(dot[max(iron,magnet)]-dot[min(iron,magnet)]);
            // cout<<"power_m is "<<power_m<<endl;
            if(power_m>0)
            {
                iron++;
                magnet++;
                count++;
            }
            else
            {
                if(iron>magnet)
                {
                    // sheet2=0;
                    magnet++;
                }
                else
                {
                    // sheet1=0;
                    iron++;
                }
            }
        }
    }
    // for(ll i=0;i<n;i++)
    // {
    //     cout<<"i is "<<i<<" and number of sheet is "<<dot[i]<<endl;
    // }
    cout<<count<<endl;
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