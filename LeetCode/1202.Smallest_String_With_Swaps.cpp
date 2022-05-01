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
    bool flag[100011];
    vector<int> vec[100001], pos;
    vector<char> allChars;
    string str;
    string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
        int n = pairs.size();
        for(int i=0;i<n;i++)flag[i] = false;
        str = s;
        for(int i=0;i<n;i++){
            int u = pairs[i][0];
            int v = pairs[i][1];
            
            vec[u].push_back(v);
            vec[v].push_back(u);
        }
        
        for(int i=0;i<n;i++){
            if(!flag[i]){
                pos.clear();
                allChars.clear();
                dfs(i);
                
                sort(allChars.begin(), allChars.end());
                sort(pos.begin(), pos.end());
                
                for(int j=0;j<pos.size();j++){
                    str[ pos[j] ] = allChars[j];
                }
            }
        }
        
        return str;
    }
    
    void dfs(int nd){
        flag[nd] = true;
        allChars.push_back(str[nd]);
        pos.push_back(nd);
        
        for(auto v: vec[nd]){
            if(!flag[v]){
                dfs(v);
            }
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