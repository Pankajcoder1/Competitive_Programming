/*
    written by Pankaj Kumar.
    country:-INDIA
    Institute: National Institute of Technology, Uttarakhand
*/
typedef long long ll ;
typedef unsigned long long ull;
typedef vector<int> vl;
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
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vl ans;
        for(int i=0;i<queries.size();i++){
            int count=0;
            for(int j=0;j<sz(points);j++){
                int x=points[j][0];
                int y=points[j][1];
                int a=queries[i][0];
                int b=queries[i][1];
                int r=queries[i][2];
                int temp=pow(abs(x-a),2)+pow(abs(y-b),2)-(r*r);
                if(temp<=0)
                    count++;
            }
            ans.pb(count);
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