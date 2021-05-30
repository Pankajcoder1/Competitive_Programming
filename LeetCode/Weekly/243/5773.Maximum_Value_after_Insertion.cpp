/*
    written by Pankaj Kumar.
    country:-INDIA
    Institute: National Institute of Technology, Uttarakhand
*/
typedef long long ll ;
typedef unsigned long long ull;
typedef vector<int> vl;
typedef vector<vector<ll>> vvl;
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
    string maxValue(string n, int x) {
        int n1=int(sz(n));
        int ans_pos=-1;
        string ans="";
        int flag=0;

        if(n[0]=='-'){
        	ans+="-";
        	flag=0;
        	for(int i=1;i<n1;i++){
        		int temp1=int(n[i]-'0');
        		if(temp1>x&&flag==0){
        			flag++;
        			ans+=char(x+'0');
        		}
        		
        		ans+=n[i];
        	}
        	if(flag==0){
        			ans+=char('0'+x);
        		}
	        return ans;
        }
        else{
        	flag=0;
        	for(int i=0;i<n1;i++){
        		int temp1=int(n[i]-'0');
        		if(temp1<x&&flag==0){
        			flag++;
        			ans+=char(x+'0');
        		}
        		
        		ans+=n[i];
        	}
        	if(flag==0)
        			ans+=char(x+'0');
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