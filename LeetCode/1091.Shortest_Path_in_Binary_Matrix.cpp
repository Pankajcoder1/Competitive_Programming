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
    vector<vector<int>> matrix;
    vector<vector<bool>> check;

    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        check.resize(n,vector<bool>(m,false));
        matrix.resize(n,vector<int>(m,100000));
        if(grid[0][0]==1) return -1;
        matrix[0][0]=1;
        queue<pair<int,int>> q;
        q.push({0,0});
        check[0][0]=true;
        while(q.size()>0){
            int i=q.front().ff;
            int j=q.front().ss;
            q.pop();
            if(i+1<n && check[i+1][j]==false && grid[i+1][j]==0){
                matrix[i+1][j]=min(matrix[i][j]+1,matrix[i+1][j]);
                check[i+1][j]=true;
                q.push({i+1,j});
            }
            if(j+1<m && check[i][j+1]==false && grid[i][j+1]==0){
                matrix[i][j+1]=min(matrix[i][j]+1,matrix[i][j+1]);
                check[i][j+1]=true;
                q.push({i,j+1});
            }
            if(i-1>=0 && check[i-1][j]==false && grid[i-1][j]==0){
                matrix[i-1][j]=min(matrix[i][j]+1,matrix[i-1][j]);
                check[i-1][j]=true;
                q.push({i-1,j});
            }
            if(j-1>=0 && check[i][j-1]==false && grid[i][j-1]==0){
                matrix[i][j-1]=min(matrix[i][j]+1,matrix[i][j-1]);
                check[i][j-1]=true;
                q.push({i,j-1});
            }
            if(i+1<n && j+1<m && check[i+1][j+1]==false && grid[i+1][j+1]==0){
                matrix[i+1][j+1]=min(matrix[i][j]+1,matrix[i+1][j+1]);
                check[i+1][j+1]=true;
                q.push({i+1,j+1});
            }
            if(i-1>=0 && j-1>=0 && check[i-1][j-1]==false && grid[i-1][j-1]==0){
                matrix[i-1][j-1]=min(matrix[i][j]+1,matrix[i-1][j-1]);
                check[i-1][j-1]=true;
                q.push({i-1,j-1});
            }
            if(i+1<n && j-1>=0 && check[i+1][j-1]==false && grid[i+1][j-1]==0){
                matrix[i+1][j-1]=min(matrix[i][j]+1,matrix[i+1][j-1]);
                check[i+1][j-1]=true;
                q.push({i+1,j-1});
            }
            if(i-1>=0 && j+1<m && check[i-1][j+1]==false && grid[i-1][j+1]==0){
                matrix[i-1][j+1]=min(matrix[i][j]+1,matrix[i-1][j+1]);
                check[i-1][j+1]=true;
                q.push({i-1,j+1});
            }

        }
        if(matrix[n-1][m-1]==100000) return -1;
        return matrix[n-1][m-1];
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