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
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        vector<vector<int>> ans;
        int n=sz(land),m=sz(land[0]);
        vector<vector<bool>> check(n,vector<bool>(m,false));
        for(int row=0;row<n;row++){
            for(int col=0;col<m;col++){
                if(land[row][col]==1&&check[row][col]==false){
                    int flag=0,temp1=0,temp2=0;
                    int row_count=0,col_count=INT_MAX;
                    for(int k1=0;k1+row<n;k1++){
                        temp2=0;
                        for(int k2=0;k2+col<m;k2++){
                            if(land[k1+row][k2+col]==1&&check[row+k1][col+k2]==false){
                                temp2++;
                            }
                            else{
                                flag=1;
                                break;
                            }
                        }
                        if(temp2){
                            col_count=min(col_count,temp2);
                            row_count++;
                        }
                        else{
                            break;
                        }
                    }
                    for(int i=row;i<row+row_count;i++){
                        for(int j=col;j<col+col_count;j++){
                            check[i][j]=true;
                        }
                    }
                    ans.pb({row,col,row+row_count-1,col+col_count-1});
                }   
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