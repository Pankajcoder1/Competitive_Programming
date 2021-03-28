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

ll cost(vector<ll>v,ll n){
    ll ans=0;
    for(ll i=0;i<n-1;i++){
        ll mini=v[i],mini_pos=i;
        for(ll j=i+1;j<n;j++){
            if(mini>v[j]){
                mini=v[j];
                mini_pos=j;
            }
        }
        reverse(v.begin()+i,v.begin()+mini_pos+1);
        ans+=abs(i-mini_pos)+1;
        // cout<<"mini pos is "<<mini_pos<<endl;
        // printv(v);
    }
    return ans;
}

ll solve()
{
    ll n,c;
    cin>>n>>c;
    ll maxo=((n*(n+1))/2)-1;
    ll mini=n-1;
    if(c>maxo||c<mini){
        cout<<"IMPOSSIBLE"<<endl;
        return 0;
    }
    vl v(n);
    for(ll i=0;i<n;i++){
        v[i]=i+1;
    }
    vl pos(n-1,1);
    ll temp_c=c-mini;
    // cout<<"temp "<<temp_c<<endl;
    for(ll i=0;i<n-1;i++){
        if(temp_c>0){
            ll req=abs(n-1-(i));
            if(temp_c>=req){
                pos[i]+=req;
                temp_c-=req;
            }
            else{
                pos[i]+=temp_c;
                temp_c=0;
                break;
            }
        }
        else
            break;
    }
    // printv(pos);
    for(ll i=n-2;i>=0;i--){
        // cout<<"before rayaye ";
        // printv(v);
        // cout<<"begin "<<*v.begin()+i<<" and end is "<<*v.begin()+pos[i]<<endl;
        reverse(v.begin()+i,v.begin()+i+pos[i]);
        // cout<<"after roatte ";
        // printv(v);
        // line;
    }
    printv(v);
    // cout<<"IMPOSSIBLE"<<endl;
    return 0;
}

int main()
{
    speed;
    /* #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif */
    ll test;
    cin>>test;
    for(ll i=1;i<=test;i++)
    {
        cout<<"Case #"<<i<<": ";
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