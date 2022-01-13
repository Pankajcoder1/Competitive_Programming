/*
    written by Pankaj Kumar.
    country:-INDIA
    Institute: National Institute of Technology, Uttarakhand
*/
typedef long long ll ;
typedef vector<int> vl;
typedef vector<vector<int>> vvl;
#define speed cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
/*  Abbrevations  */
#define ff first
#define ss second
#define mp make_pair
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


/* ascii value
A=65,Z=90,a=97,z=122
*/

/* Some syntax 
//Syntax to create a min heap for priority queue
//priority_queue <int, vector<int>, greater<int>>pq;
*/
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


/*  --------------------MAIN PROGRAM----------------------------*/
// to run ctrl+b
const ll INF=1e18;
const ll mod1=1e9+7;
const ll mod2=998244353;
// Techniques :
// divide into cases, brute force, pattern finding
// sort, greedy, binary search, two pointer
// transform into graph

// Experience :
// Cp is nothing but only observation and mathematics.


//Add main code here

class Solution {
public:
    string addBinary(string a, string b) {
        string ans="";
        if(sz(a)<sz(b)){
            swap(a,b);
        }
        while(sz(a)!=sz(b)){
            b="0"+b;
        }
        ll carry=0;
        for(ll i=sz(a)-1;i>=0;i--){
            ll temp=a[i]-'0'+b[i]-'0'+carry;
            if(carry==0){
                if(temp==0){
                    ans+="0";                    
                }
                else if(temp==1){
                    ans+="1";
                }
                else if(temp==2){
                    ans+="0";
                    carry=1;
                }
            }
            else if(carry==1){
                if(temp==1){
                    ans+="1";
                    carry=0;
                }
                else if(temp==2){
                    ans+="0";
                    carry=1;
                }
                else{
                    ans+="1";
                    carry=1;
                }
            }
        }
        if(carry==1){
            ans+="1";
        }
        reverse(all(ans));
        return ans;
    }
};


/* -----------------END OF PROGRAM --------------------*/
/*
* stuff you should look before submission
* constraint and time limit
* int overflow
* special test case (n=0||n=1||n=2)
* don't get stuck on one approach if you get wrong answer
*/