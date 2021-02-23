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
ll lcm(ll num1,ll num2)
{
    return (num1*num2)/(__gcd(num1,num2));
}

ll solve()
{
    ll n;
    cin>>n;
    vl v(n);
    forin(v,n);
    vl ans(n,0);
    ll even=4000000,odd=3999999;
    vector<bool>check(n,false);
    map<ll,ll> m;
    for(ll i=0;i<n;i++)
    {
        if(check[i]==false)
        {
            if(v[i]==(i+1))
            {
                if(m[v[i]]==0)
                {
                    ans[i]=odd;
                    odd-=2;
                }
                else
                {
                    ans[i]=m[v[i]];
                }
            }
            else if(check[i]==false)
            {
                if(m[v[i]]==0)
                {
                    ans[i]=even;
                    check[i]=true;
                    m[v[i]]=even;
                    even-=2;
                }
                else
                {
                    ans[i]=m[v[i]];
                    check[i]=true;
                }
                // for(ll j=i;j<n;j++)
                // {
                //     if(check[j]==false)
                //     {
                //         if(v[j]==v[i])
                //         {
                //             ans[j]=even;
                //             check[j]=true;
                //         }
                //     }
                // }
                even-=2;
            }
        }
    }
    for(auto x:ans)
        cout<<x<<" ";
    line;
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