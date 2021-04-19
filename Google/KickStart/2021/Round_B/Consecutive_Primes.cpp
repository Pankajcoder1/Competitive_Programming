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
const ll mod1=1e9+7;
const ll mod2=998244353;


// Techniques
// divide into cases, brute force, pattern finding
// sort, greedy, binary search, two pointer
// transform into graph
ll prime(ll n){
    for(ll i=2;i<=sqrt(n);i++){
        if(n%i==0)
            return false;
    }
    return true;
}

ll solve()
{
    ll n;
    cin>>n;
    
    ll sq=sqrt(n);
    // cout<<"sqsdf "<<sq<<endl;
    if(prime(sq)){
        ll pro=0;
        ll first=0,second=0,third=sq;
        for(ll i=sq+1;i<=LONG_MAX;i++){
            if(prime(i)){
                first=i;
                // cout<<"first in sq is "<<first<<endl;
                break;
            }
        }
        for(ll i=sq-1;i>=2;i--){
            if(prime(i)){
                second=i;
                // cout<<"second is in sq "<<second<<endl;
                break;
            }
        }
        pro=third*first;
        if(pro>n){
            pro=third*second;
        }
        cout<<pro<<endl;
    }
    else{
        ll pro=0;
        ll first=0,second=0,third=0;
        for(ll i=sq;i<=LONG_MAX;i++){
            if(prime(i)){
                first=i;
                // cout<<"first "<<first<<endl;
                break;
            }
        }
        for(ll i=sq-1;i>=2;i--){
            if(prime(i)){
                second=i;
                // cout<<"second "<<second<<endl;
                break;
            }
        }
        for(ll i=second-1;i>=2;i--){
            if(prime(i)){
                third=i;
                // cout<<"third "<<third<<endl;
                break;
            }
        }
        pro=first*second;
        if(pro>n){
            pro=second*third;
        }
        cout<<pro<<endl;
    }
    return 0;
}

int main()
{
    speed;
     // #ifndef ONLINE_JUDGE
     //    freopen("input.txt","r",stdin);
     //    freopen("output1.txt","w",stdout);
    // #endif 
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