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
    string minWindow(string s, string t) {
        int n=s.size();
        int m=sz(t);
        if(m>n){
            return "";
        }
        string ans="";
        int matched_letter=0,mini=INT_MAX;
        unordered_map<char,int> mp;
        for(auto x:t){
            mp[x]++;
        }
        int i=0,j=0;
        while(j<n){
            while(j<n&&matched_letter!=m){
                if(mp.find(s[j])!=mp.end()){
                    if(mp[s[j]]>0){
                        matched_letter++;
                    }
                    mp[s[j]]--;
                }
                j++;
            }
            while(i<j&&matched_letter==m){
                if(mp.find(s[i])!=mp.end()){
                    if(mp[s[i]]==0){
                        if(matched_letter==m&&mini>j-i){
                            mini=j-i;
                            ans=s.substr(i,j-i);
                        }
                        matched_letter--;
                    }
                    mp[s[i]]++;
                }
                i++;
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