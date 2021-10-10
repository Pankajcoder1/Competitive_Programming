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
    int minSideJumps(vector<int>& obstacles) {
    int n = obstacles.size();
    int dp[3][n];
    for(int i = 0 ; i < 3 ; i++)
        for(int j = 0 ; j < n ; j++)
            dp[i][j] = 0;

    dp[0][0] = 1;
    dp[1][0] = 0;
    dp[2][0] = 1;
    for(int i = 1 ; i < n - 1 ; i++) {
        if(obstacles[i] != 0) 
            dp[obstacles[i] - 1][i] = INT_MAX;
    }
    for(int i = 1 ; i < obstacles.size() - 1 ; i++) {
        for(int j = 0 ; j < 3 ; j++) {
            if(dp[j][i] == INT_MAX || dp[j][i + 1] == INT_MAX) {
                dp[j][i] = INT_MAX; 
                continue;
            }
            int mn = min(dp[0][i - 1], min(dp[1][i - 1], dp[2][i - 1]));
            if(mn == dp[j][i - 1])
                dp[j][i] = mn;
            else
                dp[j][i] = mn + 1;
        } 
    }
    
    return min(dp[0][n - 2], min(dp[1][n - 2], dp[2][n - 2]));
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