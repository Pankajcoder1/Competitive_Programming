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
    vl v(n+1,0);
    for(ll i=0;i<m;i++)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        vl temp(4,0);
        if(v[a]==0&&v[b]==0&&v[c]==0)
        {
            v[a]=1;
            v[b]=2;
            v[c]=3;
        }
        else if(v[a]>0&&v[b]>0&&v[c]>0)
            continue;
        else if(v[a]>0&&v[b]==0&&v[c]==0)
        {
            if(v[a]==1)
            {
                v[b]=2;
                v[c]=3;
            }
            else if(v[a]==2)
            {
                v[b]=1;
                v[c]=3;
            }
            else
            {
                v[b]=1;
                v[c]=2;
            }
        }
        else if(v[b]>0&&v[c]==0&&v[a]==0)
        {
            if(v[b]==1)
            {
                v[a]=2;
                v[c]=3;
            }
            else if(v[b]==2)
            {
                v[a]=1;
                v[c]=3;
            }
            else
            {
                v[a]=1;
                v[c]=2;
            }
        }
        else if(v[c]>0&&v[a]==0&&v[b]==0)
        {
            if(v[c]==1)
            {
                v[a]=2;
                v[b]=3;
            }
            else if(v[c]==2)
            {
                v[a]=1;
                v[b]=3;
            }
            else
            {
                v[a]=1;
                v[b]=2;
            }
        }
        else if(v[a]>0&&v[b]>0&&v[c]==0)
        {
            temp[v[a]]++;
            temp[v[b]]++;
            for(ll i=1;i<=3;i++)
            {
                if(temp[i]==0)
                {
                    v[c]=i;
                    break;
                }
            }
        }
        else if(v[a]>0&&v[c]>0&&v[b]==0)
        {
            temp[v[a]]++;
            temp[v[c]]++;
            for(ll i=1;i<=3;i++)
            {
                if(temp[i]==0)
                {
                    v[b]=i;
                    break;
                }
            }
        }
        else if(v[c]>0&&v[b]>0&&v[a]==0)
        {
            temp[v[c]]++;
            temp[v[b]]++;
            for(ll i=1;i<=3;i++)
            {
                if(temp[i]==0)
                {
                    v[a]=i;
                    break;
                }
            }
        }
    }
    for(ll i=1;i<=n;i++)
        cout<<v[i]<<" ";
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
    // cin>>TestCase;
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