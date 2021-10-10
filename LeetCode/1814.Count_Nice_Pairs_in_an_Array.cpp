/*
    written by Pankaj Kumar.
    country:-INDIA
    Institute: National Institute of Technology, Uttarakhand
*/
typedef long long ll ;
typedef unsigned long long ull;
typedef vector<ll> vl;
/*  Abbrevations  */
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define Endl "\n"
#define all(V) (V).begin(),(V).end()
#define srt(V) sort(all(V))
#define srtGreat(V) sort(all(V),greater<ll>())
// some extra
#define printv(v) for(ll i=0;i<ll(v.size());i++){cout<<v[i]<<" ";} line;
#define precision(x) cout<<fixed<<setprecision(x);
#define sz(V) ll(V.size())

/* ascii value 
A=65,Z=90,a=97,z=122
*/
/*  --------------------MAIN PROGRAM----------------------------*/
// to run ctrl+b
const ll INF=LONG_MAX;
const ll mod1=1e9+7;
const ll mod2=998244353;

class Solution {
public:
    int countNicePairs(vector<int>& nums) {
        int mod=1e9+7;
        map<int,int> m;
        int ans=0;
        for(auto x:nums){
            int no=x;
            int temp=x;
            string s=to_string(temp);
            reverse(s.begin(),s.end());
            stringstream pk(s);
            pk>>temp;
            int diff=no-temp;
            m[diff]++;
        }
        for(auto x:m){
            ans = (ans +  (long long)x.second * (x.second - 1) / 2) % mod;
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