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
    string reverseWords(string s) {
        string ans="";
        vector<string> temp;
        int n=sz(s);
        int first=n,second=0;
        for(int i=0;i<n;i++){
            if(s[i]!=' '){
                first=min(first,i);
                second=max(second,i);
            }
        }
        for(int i=first;i<=second;i++){
            if(s[i]==' '){
                int j=i;
                while(j<=second&&s[j]==' '){
                    j++;
                }
                i=j-1;
            }
            else{
                int j=i;
                string word="";
                while(j<=second&&s[j]!=' '){
                    word+=s[j++];
                }
                i=j-1;
                if(sz(word)){
                    temp.pb(word);
                }
            }
        }
        reverse(all(temp));
        for(int i=0;i<sz(temp);i++){
            if(i>0){
                ans+=" ";
            }
            ans+=temp[i];
            
        }
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