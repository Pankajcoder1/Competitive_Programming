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

    void dfs(vector<vector<char>>&grid,int i,int j,vector<vector<bool>>& check){
        if(i<0 || j<0 || i>=sz(grid) || j>=sz(grid[0]) || grid[i][j]=='0' || check[i][j]==true){
            return;
        }
        check[i][j]=true;
        dfs(grid,i+1,j,check);
        dfs(grid,i-1,j,check);
        dfs(grid,i,j+1,check);
        dfs(grid,i,j-1,check);
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int island=0;

        int n=sz(grid);
        int m=sz(grid[0]);
        vector<vector<bool>> check(n,vector<bool>(m,false));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1' && check[i][j]==false){
                    island++;
                    dfs(grid,i,j,check);
                }
            }
        }
        return island;
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