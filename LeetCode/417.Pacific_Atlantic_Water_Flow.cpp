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
    vector<vector<int> > mat;
    bool po,ao;
    set<pair<int,int> > s;
    void dfs(int x,int y){
        // cout<<x<<' '<<y<<endl;
        if(x==0 || y==0) {
            ao=true;
        }
        if(x==mat.size()-1 || y==mat[0].size()-1){
            po=true;
        }
        if(x>0 && mat[x-1][y]<=mat[x][y] && s.find(make_pair(x-1,y))==s.end()){
            s.insert(make_pair(x-1,y));
            dfs(x-1,y);
        }
        if(x<mat.size()-1 && mat[x+1][y]<=mat[x][y] && s.find(make_pair(x+1,y))==s.end()){
            s.insert(make_pair(x+1,y));
            dfs(x+1,y);
        }
        if(y>0 && mat[x][y-1]<=mat[x][y] && s.find(make_pair(x,y-1))==s.end()){
            s.insert(make_pair(x,y-1));
            dfs(x,y-1);
        }
        if(y<mat[0].size()-1 && mat[x][y+1]<=mat[x][y] && s.find(make_pair(x,y+1))==s.end()){
            s.insert(make_pair(x,y+1));
            dfs(x,y+1);
        }
    }
    
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        vector<vector<int> > ans;
        mat=heights;
        int n=heights.size();
        int m=heights[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                s.clear();
                po=false;
                ao=false;
                dfs(i,j);
                if(ao && po) ans.push_back({i,j});
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