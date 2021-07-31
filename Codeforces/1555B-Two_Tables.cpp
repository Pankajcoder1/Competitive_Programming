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
            ll W,H,x1,x2,y1,y2,w,h;
            cin>>W>>H>>x1>>y1>>x2>>y2>>w>>h;
            vector<double> distance;
            ll flag=0;
            // to put in bottom
            ll bottom=0;
            if(y1<h){
                bottom=abs(h-y1);
                ll temp2=H-y2;
                if(temp2>=bottom){
                    distance.pb(bottom);
                }
                else{
                    flag++;
                }
            }
            else{
                distance.pb(0.0);
            }
            // to put in top
            ll top=0;
            ll temp1=H-y2;
            if(temp1<h){
                top=abs(h-temp1);
                ll temp2=y1;
                if(temp2>=top){
                    distance.pb(top);
                }
                else{
                    flag++;
                }
            }
            else{
                distance.pb(0.0);
            }
            // put in right
            ll right=0;
            temp1=W-x2;
            if(w>temp1){
                ll temp2=x1;
                right=abs(temp1-w);
                if(temp2>=right){
                    distance.pb(right);
                }
                else{
                    flag++;
                }
            }
            else{
                distance.pb(0);
            }
            // put in left
            ll left=0;
            if(x1<w){
                left=abs(x1-w);
                ll temp2=W-x2;
                if(temp2>=left){
                    distance.pb(left);
                }
                else{
                    flag++;
                }
            }
            else{
                distance.pb(0.0);
            }
            if(flag==4){
                cout<<-1<<endl;
                return 0;
            }
            srt(distance);
            cout<<fixed<<setprecision(10);
            cout<<distance[0]<<endl;
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