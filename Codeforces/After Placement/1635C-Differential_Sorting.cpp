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


class Codeforces
{
    private:
        // read only variable
        const ll INF=1e18;
        const ll mod1=1e9+7;
        const ll mod2=998244353;


    public:
        Codeforces(){

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
            // you can not change element of last two position
            ll n;
            cin>>n;
            vl v(n);
            ll flag=0;
            for(ll i=0;i<n;i++){
                cin>>v[i];
            }
            for(ll i=1;i<n;i++){
                if(v[i]<v[i-1]){
                    flag++;
                }
            }
            if(flag==0){
                cout<<0<<endl;
                return 0;
            }
            if(v[n-2]>v[n-1]||(v[n-2]<0&&v[n-1]<0)){
                cout<<-1<<endl;
                return 0;
            }

            else{
                cout<<n-2<<endl;
                for(ll i=0;i<=n-3;i++){
                    cout<<i+1<<" "<<n-1<<" "<<n<<endl;
                }
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
    cin>>TestCase;
    while(TestCase--)
    {
        Codeforces cf;
        cf.solve();
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
