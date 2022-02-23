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
typedef vector<vector<ll>> vvl;
#define speed cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
/*  Abbrevations  */
#define ff first
#define ss second
#define mp make_pair
#define line cout<<endl;
#define pb push_back
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
// datatype definination
#define ordered_set tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>


class Atcoder
{
    private:
        // read only variable
        const ll INF=1e18;
        const ll mod1=1e9+7;
        const ll mod2=998244353;
        vector<bool> check;
        vector<ll> value;
        vector<vector<ll>> graph,dp;


    public:
        Atcoder(){
            check.resize(100006,false);
            dp.resize(100006);
            graph.resize(100006);
            value.resize(100006);
        }

        ll power(ll x,ll y){
            ll result=1;
            while(y>0){
                if(y&1){
                    result*=x;
                }
                y>>=1;
                x*=x;
            }
            return result;
        }

        ll power(ll x,ll y,ll mod){
            ll result=1;
            x%=mod;
            while(y>0){
                if(y&1){
                    result*=x;
                    result%=mod;
                }
                y>>=1;
                x*=x;
                x%=mod;
            }
            return result;
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
        // Techniques :
        // divide into cases, brute force, pattern finding
        // sort, greedy, binary search, two pointer
        // transform into graph

        // Experience :
        // Cp is nothing but only observation and mathematics.
        void dfs(ll root){
            if(check[root]){
                return;
            }
            vector<ll> temp;
            check[root]=true;
            temp.pb(value[root]);
            for(auto x:graph[root]){
                if(x==root){
                    continue;
                }
                dfs(x);
                for(auto y:dp[x]){
                    temp.pb(y);
                }
            }
            srtGreat(temp);
            while(sz(temp)>20){
                temp.pop_back();
            }
            dp[root]=temp;
            return ;
        }
        ll solve()
        {
            ll n,q;
            cin>>n>>q;
            for(ll i=1;i<=n;i++){
                cin>>value[i];
            }
            for(ll i=1;i<=n-1;i++){
                ll u,v;
                cin>>u>>v;
                graph[u].pb(v);
                graph[v].pb(u);
            }
            
            dfs(1);
            while(q--){
                ll v,k;
                cin>>v>>k;
                cout<<dp[v][k-1]<<endl;
            }
            return 0;
        }
};


/*  --------------------MAIN PROGRAM----------------------------*/

int main()
{
    speed;
    /* #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif */
    ll TestCase=1;
    // cin>>TestCase;;
    while(TestCase--)
    {
        Atcoder at;
        at.solve();
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