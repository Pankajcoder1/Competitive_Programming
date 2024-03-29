/*
    written by Pankaj Kumar.
    country:-INDIA
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
    int maximumWhiteTiles(vector<vector<int>>& a, int k) {
        int n = a.size();
        vector<pair<int, int>> b(n);
        vector<long long> c(n + 1);
        for (int i = 0 ; i < n ; ++ i) {
            b[i] = {a[i][0], a[i][1]};
        }
        sort(b.begin() , b.end());
        for (int i = 0 ; i < n ; ++ i) {
            c[i + 1 ] = c[i] + (b[i].second - b[i].first + 1);
        }
        
        int res = 0;
        for (int i = 0 ; i < n ; ++ i) {
            int x = b[i].first;
            int j = upper_bound(b.begin(), b.end(), make_pair(x + k - 1, 1 << 30)) - b.begin() - 1;
            int len = 0;
            if (j >= 0 && b[j].second >= x + k - 1) {
                len += x + k - 1 - b[j].first + 1; 
                -- j;
            }
            len += c[j + 1] - c[i];
            printf("%d %d\n" , i , len);
            res = max(res, len);
        }
        
        return res;
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