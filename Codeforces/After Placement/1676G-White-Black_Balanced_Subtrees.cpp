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
#define printv(v) for(ll i=0;i<ll(v.size());i++){cout<<v[i]<<" ";} cout<<endl;
#define precision(x) cout<<fixed<<setprecision(x);
#define sz(V) ll(V.size())
// function
ll power(ll x,ll y,ll mod)
{
    ll res=1;
    // x=x%mod;
    while(y>0){
        if(y%2==1){
            res*=x;
            // res=res%mod;
        }
        y/=2; x*=x; // x=x%mod;
    }
    return res;
}
ll str_to_num(string s){
    return stoi(s);
}
string num_to_str(ll num){
    return to_string(num);
}
/* ascii value 
    A=65,Z=90,a=97,z=122
*/
/* Some syntax 
    //Syntax to create a min heap for priority queue
    //priority_queue <int, vector<int>, greater<int>>pq;
*/
/*  --------------------MAIN PROGRAM----------------------------*/
const ll INF=1e18;
const ll mod1=1e9+7;
const ll mod2=998244353;
// Techniques :
// divide into cases, brute force, pattern finding
// sort, greedy, binary search, two pointer
// transform into graph


// Experience :
// Cp is nothing but only observation and mathematics.
ll n;
ll ans;
string s;
vl root;
vector<bool>check;
vector<vector<ll>> graph;

pair<ll,ll> dfs(ll root){
    if(check[root]){
        return {0,0};
    }
    check[root]=true;
    ll b=0,w=0;
    if(s[root-1]=='B'){
        b++;
    }
    else{
        w++;
    }
    for(ll i=0;i<sz(graph[root]);i++){
        if(check[graph[root][i]]==false){
            pair<ll,ll> temp=dfs(graph[root][i]);
            b+=temp.ff;
            w+=temp.ss;
        }
    }
    if(b==w){
        ans++;
    }
    return {b,w};
}

ll solve(){
    cin>>n;
    root.resize(n+1,0);
    graph.resize(n+1,vector<ll>());
    check.resize(n+1,false);
    root[1]=1;
    for(ll i=2;i<=n;i++){
        cin>>root[i];
        graph[root[i]].pb(i);
        graph[i].pb(root[i]);
    }
    cin>>s;
    ans=0;
    dfs(1);
    cout<<ans<<endl;
    s.clear();
    ans=0;
    n=0;
    graph.clear();
    root.clear();
    check.clear();
    return 0;
}
int main(){
    speed;
    /*
        #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif 
    */
    ll TestCase=1;
    cin>>TestCase;
    while(TestCase--){
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