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

// Techniques
// divide into cases, brute force, pattern finding
// sort, greedy, binary search, two pointer
// transform into graph

// add main code here
class Solution {
public:
    int findTheWinner(int n, int k) {
        int temp=k;
        int count=n;
        vector<int>v(n,1);
        for(int i=0;i<n;i++){
            v[i]=i+1;
        }
        ll start=0;
        while(count>1){
            temp=k-1;
            // cout<<"in te "<<temp<<endl;
            while(temp){
                if(v[start]>0){
                    start++;
                    temp--;
                }
                else
                    start++;
                if(start>=n)
                    start=0;
                // cout<<"temp "<<temp<<" "<<start<<endl;
            }
            if(v[start]==0){
                while(v[start]==0){
                    start++;
                    if(start>=n)
                        start=0;
                }
            }
            v[start]=0;
            // cout<<"bahar hua "<<start<<endl;
            count--;
            start++;
            if(start>=n)
                start=0;
        }
        int pos=0;
        for(ll i=0;i<n;i++){
            if(v[i]!=0){
                return i+1;
            }
        }
        return n;
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