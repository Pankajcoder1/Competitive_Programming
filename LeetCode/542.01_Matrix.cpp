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
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=sz(mat);
        int m=sz(mat[0]);
        int inf=1e7;
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                if(mat[i][j]==0){
                    continue;
                }
                int temp1=inf,temp2=inf;
                if(i-1>=0){
                    temp1=mat[i-1][j];
                }
                if(j-1>=0){
                    temp2=mat[i][j-1];
                }
                mat[i][j]=min(temp1,temp2)+1;
            }
        }
        for(ll i=n-1;i>=0;i--){
            for(ll j=m-1;j>=0;j--){
                if(mat[i][j]==0){
                    continue;
                }
                int temp1=inf,temp2=inf;
                if(i+1<n){
                    temp1=mat[i+1][j];
                }
                if(j+1<m){
                    temp2=mat[i][j+1];
                }
                mat[i][j]=min(mat[i][j],min(temp1,temp2)+1);
            }
        }
        return mat;
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