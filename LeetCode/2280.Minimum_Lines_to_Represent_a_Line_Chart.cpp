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
    int minimumLines(vector<vector<int>>& stockPrices) {
        srt(stockPrices);
        int n=sz(stockPrices);
        if(n==1){
            return 0;
        }
        else if(n==2){
            return 1;
        }
        else{
            int ans=1;
            ll previous_slope_x = stockPrices[0][0]-stockPrices[1][0];
            ll previous_slope_y = stockPrices[0][1]-stockPrices[1][1];
            for(int i=1;i+1<n;i++){
                ll temp_slope_x=stockPrices[i][0]-stockPrices[i+1][0];
                ll temp_slope_y=stockPrices[i][1]-stockPrices[i+1][1];
                if(ll(temp_slope_x*previous_slope_y)!=ll(temp_slope_y*previous_slope_x)){
                    ans++;
                }
                previous_slope_x=temp_slope_x;
                previous_slope_y=temp_slope_y;
            }
            return ans;
        }
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
