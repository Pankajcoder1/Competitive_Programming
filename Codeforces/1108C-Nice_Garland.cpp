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

ll solve()
{
    ll n;
    string s;
    cin>>n>>s;
    string s1="",s2="",s3="",s4="",s5="",s6="";
    for(ll i=0;i<n;i++){
        if(i%3==0){
            s1+='R';
            s2+='G';
            s3+='B';
            s4+='R';
            s5+='G';
            s6+='B';
        }
        else if(i%3==1){
            s1+='G';
            s2+='B';
            s3+='R';
            s4+='B';
            s5+='R';
            s6+='G';
        }
        else{
            s1+='B';
            s2+='R';
            s3+='G';
            s4+='G';
            s5+='B';
            s6+='R';
        }
    }

    ll ans1=0,ans2=0,ans3=0,ans4=0,ans5=0,ans6=0;
    for(ll i=0;i<n;i++){
        if(s1[i]!=s[i])
            ans1++;
        if(s2[i]!=s[i])
            ans2++;
        if(s3[i]!=s[i])
            ans3++;
        if(s4[i]!=s[i])
            ans4++;
        if(s5[i]!=s[i])
            ans5++;
        if(s6[i]!=s[i])
            ans6++;
    }
    ll mini=min({ans1,ans2,ans3,ans4,ans5,ans6});
    cout<<mini<<endl;
    if(mini==ans1)
        cout<<s1<<endl;
    else if(mini==ans2)
        cout<<s2<<endl;
    else if(mini==ans3)
        cout<<s3<<endl;
    else if(mini==ans4)
        cout<<s4<<endl;
    else if(mini==ans5)
        cout<<s5<<endl;
    else
        cout<<s6<<endl;
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