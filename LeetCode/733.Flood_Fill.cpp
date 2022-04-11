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
    void dfs(vector<vector<int>>& image,vector<vector<bool>> &check,int i,int j,int changeable_color,int newcolor){
        if(i<0 || j<0 || i>=image.size() || j>=image[0].size() || check[i][j]){
            return;
        }
        if(image[i][j]==changeable_color){
            image[i][j]=newcolor;
            check[i][j]=true;
            dfs(image,check,i+1,j,changeable_color,newcolor);
            dfs(image,check,i-1,j,changeable_color,newcolor);
            dfs(image,check,i,j+1,changeable_color,newcolor);
            dfs(image,check,i,j-1,changeable_color,newcolor);
        }
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int n=sz(image);
        int m=sz(image[0]);
        int changeable_color=image[sr][sc];
        vector<vector<bool>> check(n,vector<bool>(m,false));
        dfs(image,check,sr,sc,changeable_color,newColor);
        return image;
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