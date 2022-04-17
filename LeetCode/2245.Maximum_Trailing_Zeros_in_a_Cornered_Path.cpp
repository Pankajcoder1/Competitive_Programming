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
    int maxTrailingZeros(vector<vector<int>>& grid) {
        vector<vector<pair<int,int>>> dp(sz(grid),vector<pair<int,int>>(sz(grid[0]),{0,0}));
        int n=sz(grid),m=sz(grid[0]);
        vector<vector<pair<int,int>>> up(n,vector<pair<int,int>>(m,{0,0}));
        vector<vector<pair<int,int>>> down(n,vector<pair<int,int>>(m,{0,0}));
        vector<vector<pair<int,int>>> left(n,vector<pair<int,int>>(m,{0,0}));
        vector<vector<pair<int,int>>> right(n,vector<pair<int,int>>(m,{0,0}));

        int maxo=0;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int temp=grid[i][j];
                int count_5=0,count_2=0;
                while(temp%5==0){
                    temp/=5;
                    count_5++;
                }
                while(temp%2==0){
                    temp/=2;
                    count_2++;
                }
                dp[i][j].ff=count_5;
                dp[i][j].ss=count_2;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(j==0){
                    right[i][j].ff=dp[i][j].ff;
                    right[i][j].ss=dp[i][j].ss;
                }
                else{
                    right[i][j].ff=right[i][j-1].ff+dp[i][j].ff;
                    right[i][j].ss=right[i][j-1].ss+dp[i][j].ss;
                }
            }
        }


        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                if(j==m-1){
                    left[i][j].ff=dp[i][j].ff;
                    left[i][j].ss=dp[i][j].ss;
                }
                else{
                    left[i][j].ff=left[i][j+1].ff+dp[i][j].ff;
                    left[i][j].ss=left[i][j+1].ss+dp[i][j].ss;
                }
            }
        }


        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0){
                    down[i][j].ff=dp[i][j].ff;
                    down[i][j].ss=dp[i][j].ss;
                }
                else{
                    down[i][j].ss=down[i-1][j].ss+dp[i][j].ss;
                    down[i][j].ff=down[i-1][j].ff+dp[i][j].ff;
                }
            }
        }


        for(int i=n-1;i>=0;i--){
            for(int j=0;j<m;j++){
                if(i==n-1){
                    up[i][j].ff=dp[i][j].ff;
                    up[i][j].ss=dp[i][j].ss;
                }
                else{
                    up[i][j].ff=up[i+1][j].ff+dp[i][j].ff;
                    up[i][j].ss=up[i+1][j].ss+dp[i][j].ss;
                }
            }
        }



        // cout<<"right "<<endl;
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         cout<<right[i][j].ff<<","<<right[i][j].ss<<"  ";
        //     }
        //     cout<<endl;
        // }
        // cout<<"left "<<endl;
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         cout<<left[i][j].ff<<","<<left[i][j].ss<<"  ";
        //     }
        //     cout<<endl;
        // }

        // cout<<"up "<<endl;
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         cout<<up[i][j].ff<<","<<up[i][j].ss<<"  ";
        //     }
        //     cout<<endl;
        // }
        // cout<<"down "<<endl;
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         cout<<down[i][j].ff<<","<<down[i][j].ss<<"  ";
        //     }
        //     cout<<endl;
        // }





        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int temp_2=0,temp_5=0;
                // for
                // |
                // |
                // |
                // ____
                temp_2=up[i][j].ss+right[i][j].ss-dp[i][j].ss;
                temp_5=up[i][j].ff+right[i][j].ff-dp[i][j].ff;
                maxo=max(maxo,min(temp_2,temp_5));

                // for
                //  |
                //  |
                //  |
                //---

                temp_2=down[i][j].ss+left[i][j].ss-dp[i][j].ss;
                temp_5=down[i][j].ff+left[i][j].ff-dp[i][j].ff;
                maxo=max(maxo,min(temp_2,temp_5));

                // for
                // ------
                //      |
                //      |
                //      |

                temp_2=left[i][j].ss+up[i][j].ss-dp[i][j].ss;
                temp_5=left[i][j].ff+up[i][j].ff-dp[i][j].ff;
                maxo=max(maxo,min(temp_2,temp_5));

                // for
                // -----
                // |
                // |
                // |

                temp_2=right[i][j].ss+down[i][j].ss-dp[i][j].ss;
                temp_5=right[i][j].ff+down[i][j].ff-dp[i][j].ff;
                maxo=max(maxo,min(temp_2,temp_5));

            }
        }
        
        for(int i=0;i<n;i++){
            maxo=max(maxo,min(up[i][0].ss,up[i][0].ff));
        }
        // ----------------
        for(int i=0;i<m;i++){
            maxo=max(maxo,min(right[0][i].ss,right[0][i].ff));
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
