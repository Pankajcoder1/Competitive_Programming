/*
    written by Pankaj Kumar.
    country:-INDIA
    Institute: National Institute of Technology, Uttarakhand
*/
typedef long long ll ;
typedef unsigned long long ull;
typedef vector<int> vl;
typedef vector<vector<int>> vvl;
#define speed cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
/*  Abbrevations  */
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
// loops
#define forin(arr,n) for(ll i=0;i<n;i++) cin>>arr[i];
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
    unordered_map<int,int> color_size;
    const int DIR[5] = {0, 1, 0, -1, 0};
    void dfs(vector<vector<int>>& grid,int i,int j,int color_index,int n){
        if(i>=n||j>=n||i<0||j<0){
            return ;
        }
        if(grid[i][j]!=1){
            return ;
        }
        grid[i][j]=color_index;
        color_size[color_index]++;
        for(ll z=0;z<4;z++){
            dfs(grid,i+DIR[z],j+DIR[z+1],color_index,n);
        }
        return ;

    }
    
    int largestIsland(vector<vector<int>>& grid) {
        int n=sz(grid);
        int maxo=0,color_index=2;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]!=0){
                    dfs(grid,i,j,color_index,n);
                    maxo=max(maxo,color_size[color_index]);
                    color_index++;
                }
            }
        }
        
        for(ll i=0;i<n;i++){
            for(ll j=0;j<n;j++){
                if(grid[i][j]!=0){
                    continue;
                }
                else{
                    set<int> side_color;
                    for(int k=0;k<4;k++){
                        int row=i+DIR[k],col=j+DIR[k+1];
                        if(row>=n||col>=n||row<0||col<0){
                            continue;
                        }
                        else{
                            side_color.insert(grid[row][col]);
                        }
                    }
                    int total_size=1;
                    for(auto x:side_color){
                        total_size+=color_size[x];
                    }
                    maxo=max(maxo,total_size);
                }
            }
        }
        return maxo;
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