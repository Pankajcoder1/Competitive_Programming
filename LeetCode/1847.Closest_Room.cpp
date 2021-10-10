/*
    written by Pankaj Kumar.
    country:-INDIA
    Institute: National Institute of Technology, Uttarakhand
*/
typedef long long ll ;
typedef unsigned long long ull;
typedef vector<int> vl;
typedef vector<vector<ll>> vvl;
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
#define printv(v) for(ll i=0;i<ll(v.size());i++){cout<<v[i]<<" ";} cout<<endl;
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
    set<int> s;
    vl ans;
    int id[100005],id2[100005];
public:
    vector<int> closestRoom(vector<vector<int>>& rooms, vector<vector<int>>& queries) {
        int n1=sz(queries);
        for(ll i=0;i<n1;i++)
            id[i]=i;
        sort(id,id+n1,[&](int i,int j)
            {return queries[i][1]>queries[j][1];}
        );
        int n2=sz(rooms);
        for(int i=0;i<n2;i++)
            id2[i]=i;
        sort(id2,id2+n2,[&](int i,int j){return rooms[i][1]>rooms[j][1];});
        ans=vector<int>(n1,0);
        int j=0;
        for(int i=0;i<n1;i++){
            while (j < n2 && rooms[id2[j]][1] >= queries[id[i]][1])
                s.insert(rooms[id2[j]][0]), ++j;
            int pp = queries[id[i]][0];
            if (s.empty()){
                ans[id[i]] = -1;
            } else {
                auto iter = s.lower_bound(pp);
                int maxi = 1000000000, res = -1;
                if (iter != s.end()){
                    maxi = *iter - pp, res = *iter;
                }
                if (iter != s.begin()){
                    --iter;
                    int bb = pp - *iter;
                    if (bb <= maxi) maxi = bb, res = *iter;
                }
                ans[id[i]] = res;
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