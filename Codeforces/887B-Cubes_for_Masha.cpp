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
#define no cout<<"No"<<endl;
#define yes cout<<"Yes"<<endl;
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
const ll N=1e5+5;
ll freq[N];
ll v[5][100];
void process1(ll i,ll j){
    for(ll x=1;x<=6;x++){
        for(ll y=1;y<=6;y++){
            ll temp=v[i][x]*10+v[j][y];
            freq[temp]++;
        }
    }
}

void process2(ll i,ll j,ll k){
    for(ll x=1;x<=6;x++){
        for(ll y=1;y<=6;y++){
            for(ll z=1;z<=6;z++){
                ll temp=v[i][x]*100+v[j][y]*10+v[k][z];
                freq[temp]++;
            }
        }
    }
}

ll solve()
{
    ll n;
    cin>>n;
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=6;j++){
            cin>>v[i][j];
            freq[v[i][j]]++;
        }
    }

    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=n;j++){
            if(i!=j){
                process1(i,j);
            }
        }
    }

    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=n;j++){
            if(i!=j){
                for(ll k=1;k<=n;k++){
                    if(k==i||k==j)
                        continue;
                    process2(i,j,k);
                }
            }
        }
    }
    for(ll i=1;i<=1000;i++){
        if(freq[i]==0){
            cout<<i-1<<endl;
            return 0;
        }
    }
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
/* -----------------END OF PROGRAM --------------------*/
/*
* stuff you should look before submission 
* constraint and time limit
* int overflow
* special test case (n=0||n=1||n=2)
* don't get stuck on one approach if you get wrong answer
*/