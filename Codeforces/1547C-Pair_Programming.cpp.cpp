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
/* ascii value
A=65,Z=90,a=97,z=122
*/

/* Some syntax 
//Syntax to create a min heap for priority queue
//priority_queue <int, vector<int>, greater<int>>pq;
*/


/*  --------------------MAIN PROGRAM----------------------------*/
// to run ctrl+b
const ll INF=1e18;
const ll mod1=1e9+7;
const ll mod2=998244353;
// Techniques :
// divide into cases, brute force, pattern finding
// sort, greedy, binary search, two pointer
// transform into graph

// Experience :
// Cp is nothing but only observation and mathematics.
ll solve()
{
    ll k,n,m;
    cin>>k>>m>>n;
    vl a(m);
    vl b(n);
    forin(a,m);
    forin(b,n);
    vl ans;
    ll pos1=0,pos2=0;
    ll no_of_line=k;
    while(pos1<m&&pos2<n){
        if(a[pos1]==0){
            no_of_line++;
            // cout<<0<<" ";
            ans.pb(0);
            pos1++;
        }
        else if(b[pos2]==0){
            no_of_line++;
            // cout<<0<<" ";
            ans.pb(0);
            pos2++;
        }
        else{
            ll mini=min(a[pos1],b[pos2]);
            if(mini==a[pos1]&&mini<=no_of_line){
                // cout<<a[pos1]<<" ";
                ans.pb(a[pos1]);
                pos1++;
            }
            else if(mini==b[pos2]&&mini<=no_of_line){  
                // cout<<b[pos2]<<" ";
                ans.pb(b[pos2]);
                pos2++;
            }
            else{
                cout<<-1<<endl;
                return 0;
            }
        }
    }
    while(pos1<m){
        if(a[pos1]>no_of_line){
            cout<<-1<<endl;
            return 0;
        }
        else{
            if(a[pos1]==0){
                no_of_line++;
            }
            // cout<<a[pos1]<<" ";
            ans.pb(a[pos1]);
            pos1++;
        }
    }
    while(pos2<n){
        if(b[pos2]>no_of_line){
            cout<<-1<<endl;
            return 0;
        }
        else{
            // cout<<b[pos2]<<" ";
            if(b[pos2]==0){
                no_of_line++;
            }
            ans.pb(b[pos2]);
            pos2++;
        }
    }
    printv(ans);
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