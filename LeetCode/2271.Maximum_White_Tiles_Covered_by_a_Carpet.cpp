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
    int maximumWhiteTiles(vector<vector<int>>& tiles, int carpetLen) {
        
        int n = tiles.size();
        vector<int> start, end;
        for(vector<int> vec : tiles) {
            start.push_back(vec[0]);
            end.push_back(vec[1]);
        }
        
        sort(start.begin(), start.end());
        sort(end.begin(), end.end());
        
        int total = 0;
        vector<int> pref(n);
        for(int i=0; i<n; i++) {
            total += end[i]-start[i]+1;
            pref[i] = total;
        }
        int ans = 0;
        for(int i=0; i<n; i++) {
            int last = start[i]+carpetLen-1;
            
            if(end[n-1] <= last) {
                int curr = pref[n-1];
                if(i > 0)   curr -= pref[i-1];
                
                ans = max(ans, curr);
            }
            else {
                int pos = upper_bound(end.begin(), end.end(), last) - end.begin();
                int curr = pref[pos-1];
                if(i > 0)   curr -= pref[i-1];
                
                if(last >= start[pos])  curr += last-start[pos]+1;
                ans = max(ans, curr);
            }
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