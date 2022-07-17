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
int k,x,i,j,n;
string temp,temp1;
vector<pair<string,int>> v;

bool compare(pair<string,int>&a, pair<string,int>& b){
    if(a.ff.size() == b.ff.size()){
        if(a.ff==b.ff){
            return a.ss<b.ss;
        }
        return a.ff<b.ff;
    }
    else{
        return a.ff.size()<b.ff.size();
    }
}

class Solution {
public:
    vector<int> smallestTrimmedNumbers(vector<string>& nums, vector<vector<int>>& queries) {
        n=queries.size();
        vl ans(n);
        for(i=0;i<n;i++){
            k=queries[i][0];
            x=queries[i][1];
            v.clear();
            for(j=0;j<nums.size();j++){
                temp=nums[j];
                temp1="0";
                if(temp.size()>=x){
                    temp1=temp.substr(temp.size()-x);
                }
                v.pb({temp1,j});
            }
            
            sort(all(v),compare);
            ans[i]=v[k-1].ss;
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
