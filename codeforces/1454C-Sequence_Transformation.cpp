/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef vector<ll> vl;
#define pan cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
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
    vl v(n);
    forin(v,n);
    map<ll,vector<ll>> m;
    for(ll i=0;i<n;i++)
    {
        m[v[i]].pb(i+1);
    }
    ll mini=LONG_MAX;
    for(auto x:m)
    {
        ll count=0,pre=0;
        for(ll j=0;j<x.ss.size();j++)
        {
            // cout<<"elemtn is "<<x.ss[j]<<endl;
            if(j==0)
            {
                if(j==0)
                {
                    if(x.ss[0]==1)
                    {
                        // cout<<"set hua pre first me "<<pre<<endl;
                        pre=1;
                    }
                    else
                    {
                        pre=x.ss[0];
                        count++;
                    }
                }
                
            }
            else
            {
                // cout<<" pre is "<<pre<<"  and x.ss[j] s "<<x.ss[j]<<endl;
                    
                if((x.ss[j]-pre)>1)
                {
                    // cout<<"pre is "<<pre<<"  and x.ss[j] s "<<x.ss[j]<<endl;
                    // cout<<"hi ";
                    pre=x.ss[j];
                    count++;
                }
                pre=x.ss[j];
            }
            if(j==(x.ss.size()-1))
                {
                    if(x.ss[j]==(n))
                    {
                        pre=x.ss[j];
                    }
                    else
                    {
                        // cout<<" ji ";
                        count++;
                    }
                }
        }
        mini=min(mini,count);
        // cout<<"count for "<<x.ff<<" is "<<count<<endl;
        // line;
    }
    cout<<mini<<endl;
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