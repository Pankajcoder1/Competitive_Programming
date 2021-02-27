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

// partially accepted
ll solve()
{
        ll n;
    cin>>n;
    vector<pair<ll,ll>> ans;
    vl v(n);
    ll neg=0;
    forin(v,n);
    ll sum=0,mini=LONG_MAX;
    for(ll i=0;i<n;i++)
    {
        if(v[i]>=0)
        {
            sum+=v[i];
            mini=min(mini,v[i]);
        }
        else
        {
            neg++;
            if(mini!=LONG_MAX)
            {
                ans.pb({sum,mini});
                sum=0;
                mini=LONG_MAX;
            }
        }
    }
    if(mini!=LONG_MAX)
    {
        ans.pb({sum,mini});
        sum=0;
        mini=LONG_MAX;
    }
    ll maxo=0;
    if(sz(ans)==1)
    {
        if(neg==0)
        {
            maxo=ans[0].ff-ans[0].ss;
        }
        else
            maxo=ans[0].ff;
        cout<<maxo<<endl;
        return 0;
    }
    else
    {
        vector<ll>maximum(sz(ans),0);
        ll temp_maxo=0;
        for(ll i=sz(ans)-1;i>=0;i--)
        {
            maximum[i]=temp_maxo;
            temp_maxo=max(temp_maxo,ans[i].ff);
        }
        // printv(maximum);
        temp_maxo=0;
        for(ll i=0;i<sz(ans);i++)
        {
            temp_maxo=max(temp_maxo,ans[i].ff);
            maxo=max(maxo,temp_maxo+maximum[i]);
        }
        cout<<maxo<<endl;
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