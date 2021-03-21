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

ll solve()
{
    ll n,m;
    cin>>n>>m;
    vector<vector<ll>> v(n,vector<ll>(m));
    ll upm[n][m],downm[n][m],rightm[n][m],leftm[n][m];

    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++)
            cin>>v[i][j];
    }

    ll ans=0;

    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            ll up=1,down=1,left=1,right=1;
            if(v[i][j]==1){
                
                // for right side
                for(ll k=j+1;k<m;k++){
                    if(v[i][k]==1)
                        right++;
                    else
                        break;
                }
                // for left side;
                for(ll k=j-1;k>=0;k--){
                    if(v[i][k]==1)
                        left++;
                    else
                        break;
                }
                // for up
                for(ll k=i-1;k>=0;k--){
                    if(v[k][j]==1){
                        up++;
                    }
                    else
                        break;
                }
                // for down
                for(ll k=i+1;k<n;k++){
                    if(v[k][j]==1){
                        down++;
                    }
                    else
                        break;
                }
                // cout<<"up "<<up<<" "<<right<<" "<<down<<" "<<left<<" "<<endl;
            }
            upm[i][j]=up;
                rightm[i][j]=right;
                leftm[i][j]=left;
                downm[i][j]=down;
        }
    }
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){

            ll up=upm[i][j],down=downm[i][j],right=rightm[i][j],left=leftm[i][j];
            if(up>=4&&right>=2)
                ans+=min(up/2,right)-1;

            if(up>=4&&left>=2)
                ans+=min(up/2,left)-1;

            if(right>=4&&up>=2)
                ans+=min(right/2,up)-1;

            if(left>=4&&up>=2)
                ans+=min(left/2,up)-1;
            // 
            if(down>=4&&right>=2)
                ans+=min(down/2,right)-1;

            if(down>=4&&left>=2)
                ans+=min(down/2,left)-1;

            if(right>=4&&down>=2)
                ans+=min(right/2,down)-1;

            if(left>=4&&down>=2)
                ans+=min(left/2,down)-1;
        }
    }
    cout<<ans<<endl;
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