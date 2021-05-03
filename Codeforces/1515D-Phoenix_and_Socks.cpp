/*
    written by Pankaj Kumar.
    country:-INDIA
    Institute: National Institute of Technology, Uttarakhand
*/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long ll ;
typedef unsigned long long ull;
typedef vector<ll> vl;
typedef vector<vector<ll>> vvl;
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
    stringstream pk(s);
    ll num;
    pk>>num;
    return num;
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
/*  --------------------MAIN PROGRAM----------------------------*/
// to run ctrl+b
const ll INF=LONG_MAX;
const ll mod1=1e9+7;
const ll mod2=998244353;


// Techniques
// divide into cases, brute force, pattern finding
// sort, greedy, binary search, two pointer
// transform into graph

ll solve()
{
    ll n,l,r;
    cin>>n>>l>>r;
    ll ans=0;
    vl v(n);
    forin(v,n);
    map<ll,ll> left,right;
    for(ll i=0;i<l;i++)
        left[v[i]]++;
    for(ll i=l;i<n;i++)
        right[v[i]]++;

    for(ll i=0;i<l;i++){
        ll socks=v[i];
        if(right[socks]>0){
            left[socks]--;
            right[socks]--;
            if(right[socks]==0)
                right.erase(socks);
            if(left[socks]==0)
                left.erase(socks);
        }
    }
    ll sz_left=0;
    ll sz_right=0;
    // cout<<"in left "<<endl;
    for(auto x:left){
        sz_left+=x.ss;
        // cout<<x.ff<<" "<<x.ss<<endl;
    }
    // cout<<"in right "<<endl;
    for(auto x:right){
        sz_right+=x.ss;
        // cout<<"in rught "<<x.ff<<" "<<x.ss<<endl;
    }
    // cout<<"in left "<<sz_left<<" in right "<<sz_right<<endl;
    if(sz_right==sz_left)
        ans+=sz_right;
    else{
        ll increment=0;
        ll sum2=sz_right+sz_left;
        sum2/=2;
        increment=abs(sum2-sz_right);
        ans+=sum2;
        ans+=increment;
        if(sz_right>sz_left){
            for(auto x:right){
                if(increment<=0)
                    break;
                ll temp=x.ss/2;
                if(temp>0){
                    temp=min(temp,increment);
                    increment-=temp;
                    ans-=temp;
                }
            }
        }
        else{
            for(auto x:left){
                if(increment<=0)
                    break;
                ll temp=x.ss/2;
                if(temp>0){
                    temp=min(temp,increment);
                    increment-=temp;
                    ans-=temp;
                }
            }
        }
    }
    cout<<ans<<endl;
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
/* -----------------END OF PROGRAM --------------------*/
/*
* stuff you should look before submission 
* constraint and time limit
* int overflow
* special test case (n=0||n=1||n=2)
* don't get stuck on one approach if you get wrong answer
*/