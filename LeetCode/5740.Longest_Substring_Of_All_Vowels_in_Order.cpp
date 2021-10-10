/*
    written by Pankaj Kumar.
    country:-INDIA
    Institute: National Institute of Technology, Uttarakhand
*/
typedef long long ll ;
typedef unsigned long long ull;
typedef vector<int> vl;
/*  Abbrevations  */
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define Endl "\n"
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
/*  --------------------MAIN PROGRAM----------------------------*/
// to run ctrl+b
const ll INF=LONG_MAX;
const ll mod1=1e9+7;
const ll mod2=998244353;

// Techniques
// divide into cases, brute force, pattern finding
// sort, greedy, binary search, two pointer
// transform into graph

// add main code here
class Solution {
public:
    int longestBeautifulSubstring(string word) {
        int maxo=0;
        int n=sz(word);
        map<char,ll> m;
        int start=0,end=0;
        if(word[0]=='a'||word[0]=='e'||word[0]=='i'||word[0]=='o'||word[0]=='u'){
            m[word[0]]++;
            end++;
        }
        for(int i=1;i<n;i++){
            if(word[i]>=word[i-1]){
                if(word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u'){
                    m[word[i]]++;
                }
                if(sz(m)>=5){
                    maxo=max(maxo,(i-start+1));
                }
            }
            else{
                m.clear();
                start=i;
                if(word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u'){
                    m[word[i]]++;
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