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
/* ascii value 
A=65,Z=90,a=97,z=122
*/
/*  -----------------------------------------------------------------------------------*/
ll MAX=300002;
ll modulo=ll(pow(2,32));
vl weight(MAX+1,0);
vector<ll> root(MAX+1,0);
map<pair<ll,ll>,ll> m;
vector<vector<ll>> adj(MAX+1);
vector<bool>check(MAX+1,false);
queue<ll> qu;


// partially accepted
ll calculate(ll a,ll b)
{
    if(a>b)
        swap(a,b);
    if(m[{a,b}]!=0)
    {
        return m[{a,b}]%modulo;
    }
    else
    {
        ll ans=1;
        ans*=((weight[a]%modulo)*(weight[b]%modulo));
        ans+=calculate(root[a],root[b]);
        ans%=modulo;
        m[{a,b}]=ans;
        return ans;
    }
}



ll solve()
{
    root[1]=0;
    ll n,q;
    scanf("%lld%lld",&n,&q);    
    for(ll i=1;i<=n;i++)
    {
        scanf("%lld",&weight[i]);
        weight[i]=weight[i]%modulo;
    }
    
    for(ll i=0;i<(n-1);i++)
    {
        ll a,b;
        scanf("%lld%lld",&a,&b);
        adj[a].pb(b);
        adj[b].pb(a);
    }
    
    qu.push(1);
    m[{1,1}]=((weight[1]*weight[1])%modulo);
    while(!qu.empty())
    {
        ll temp=qu.front();
        qu.pop();
        check[temp]=true;
        for(auto x:adj[temp])
        {
            if(check[x]==false)
            {
                qu.push(x);
                check[x]=true;
                root[x]=temp;
                m[{x,x}]=(m[{temp,temp}]%modulo)+((weight[x]%modulo)*(weight[x]%modulo));
            }
        }
    }

    while(q--)
    {
        ll a,b;
        scanf("%lld%lld",&a,&b);
        if(a==1)
        {
            cout<<m[{1,1}]<<endl;
        }
        else
        {
            if(a>b)
                swap(a,b);
            if(m[{a,b}]!=0)
            {
                cout<<m[{a,b}]<<endl;
            }
            else
            {
                ll ans=1;
                ans*=((weight[a]*weight[b])%modulo);
                ans%=modulo;
                ans+=calculate(root[a],root[b]);
                ans%=modulo;
                m[{a,b}]=ans;
                cout<<m[{a,b}]<<endl;
            }
        }
    }
    return 0;
}

int main()
{
    //freopen("input.txt"a, "r", stdin);
    pan;
    solve();
    return 0;
}

/* stuff you should look before submission 
* datatype overflow
* special test case (n=0||n=1||n=2)
* don't get stuck on one approach if you get wrong answer
*/
