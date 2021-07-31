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
            string s;
            ll n,q;
            cin>>n>>q;
            cin>>s;
            string s1="",s2="",s3="",s4="",s5="",s6="";
            for(ll i=0;i<n;i++){
                if(i%3==0){
                    s1+='a';
                    s2+='b';
                    s3+='c';
                    s4+='c';
                    s5+='b';
                    s6+='a';
                }
                else if(i%3==1){
                    s1+='b';
                    s2+='c';
                    s3+='a';
                    s4+='b';
                    s5+='a';
                    s6+='c';
                }
                else{
                    s1+='c';
                    s2+='a';
                    s3+='b';
                    s4+='a';
                    s5+='c';
                    s6+='b';
                }
            }
            // cout<<"s1 is "<<s1<<endl;
            // cout<<"s2 is "<<s2<<endl;
            // cout<<"s3 is "<<s3<<endl;
            // cout<<"s4 is "<<s4<<endl;
            // cout<<"s5 is "<<s5<<endl;
            // cout<<"s6 is "<<s6<<endl;
            vl prefix1(n+1,0),prefix2(n+1,0),prefix3(n+1,0),prefix4(n+1,0),prefix5(n+1,0),prefix6(n+1,0);
            ll temp1=0,temp2=0,temp3=0,temp4=0,temp5=0,temp6=0;
            for(ll i=0;i<n;i++){
                if(s[i]!=s1[i]){
                    temp1++;
                }
                if(s[i]!=s2[i]){
                    temp2++;
                }
                if(s[i]!=s3[i]){
                    temp3++;
                }
                if(s[i]!=s4[i]){
                    temp4++;
                }
                if(s[i]!=s5[i]){
                    temp5++;
                }
                if(s[i]!=s6[i]){
                    temp6++;
                }
                prefix1[i+1]=temp1;
                prefix2[i+1]=temp2;
                prefix3[i+1]=temp3;
                prefix4[i+1]=temp4;
                prefix5[i+1]=temp5;
                prefix6[i+1]=temp6;
            }
            // printv(prefix1);
            // printv(prefix2);
            // printv(prefix3);
            // printv(prefix4);
            // printv(prefix5);
            // printv(prefix6);
            while(q--){
                ll l,r;
                cin>>l>>r;
                l--;
                // r--;
                ll ans=min({prefix1[r]-prefix1[l],prefix2[r]-prefix2[l],prefix3[r]-prefix3[l],prefix4[r]-prefix4[l],prefix5[r]-prefix5[l],prefix6[r]-prefix6[l]});
                cout<<ans<<endl;
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
    // cin>>TestCase;
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