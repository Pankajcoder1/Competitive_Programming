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

// datatype definination
#define ordered_set tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>


ll ppow(ll n, ll m, ll mod){
    if(m==0) return 1;
    ll tmp=ppow(n, m/2, mod);
    tmp=tmp*tmp%mod;
    return m%2 ? tmp*n%mod: tmp;
}
namespace mod_operations{
    ll modInv(ll n, ll mod){
        return ppow(n,mod-2, mod);
    }
    ll modAdd(ll n, ll m, ll mod){
        n=(n%mod+mod)%mod; m=(m%mod+mod)%mod;
        return (n+m)%mod;
    }
    ll modMul(ll n, ll m, ll mod){
        n=(n%mod+mod)%mod; m=(m%mod+mod)%mod;
        return n*m %mod;
    }
    ll modSub(ll n, ll m, ll mod){
        n=(n%mod+mod)%mod; m=(m%mod+mod)%mod;
        return modAdd(n,-m, mod);
    }
    ll modDiv(ll n, ll m, ll mod){
        return modMul(n, modInv(m, mod), mod);
    }
}
using namespace mod_operations;


class Atcoder
{
    private:
        // read only variable
        const ll INF=1e18;
        const ll mod1=1e9+7;
        const ll mod2=998244353;


    public:
        Atcoder(){

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
        ll solve()
        {
            string s,t;
            cin>>s>>t;
            int n=sz(s),m=sz(t);
            string ans_string="";
            vector<vector<int>> dp(n+1,vector<int>(m+1,0));
            for(int i=1;i<=n;i++){
                for(ll j=1;j<=m;j++){
                    if(s[i-1]==t[j-1]){
                        dp[i][j]=dp[i-1][j-1]+1;
                    }
                    else{
                        dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                    }
                }
            }
            
            int i_last=n,j_last=m;
            while(i_last>=1&&j_last>=1){
                if(i_last<=0||j_last<=0){
                    break;
                }
                if(s[i_last-1]==t[j_last-1]){
                    ans_string+=s[i_last-1];
                    i_last--;
                    j_last--;
                }
                else if(dp[i_last-1][j_last]>dp[i_last][j_last-1]){
                    i_last--;
                }
                else{
                    j_last--;
                }
            }
            reverse(all(ans_string));
            cout<<ans_string<<endl;
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