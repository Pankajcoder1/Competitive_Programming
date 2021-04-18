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
    vector<int> getOrder(vector<vector<int>>& tasks) {
        vector<pair<pair<int,int>,int>> v;
        vl ans;
        int n=tasks.size();
        for(int i=0;i<n;i++){
        	v.pb(mp(mp(tasks[i][0],tasks[i][1]),i));
        }
        srt(v);
        ll now=0;
        set<pair<int,int>> s;
        pair<int,int> temp;
        int i=0;
        while(i<n||sz(s)>0){
        	if(sz(s)==0){
        		now=max(now,ll(v[i].ff.ff));
        	}
        	int j=i;
        	while(j<n&&v[j].ff.ff<=now){
        		s.insert(mp(v[j].ff.ss,v[j].ss));
        		j++;
        	}
        	i=j;
        	temp=*s.begin();
        	s.erase(s.begin());
        	now+=temp.ff;
        	ans.pb(temp.ss);
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