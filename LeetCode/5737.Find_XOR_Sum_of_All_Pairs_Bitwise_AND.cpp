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
    int getXORSum(vector<int>& arr1, vector<int>& arr2) {
        vl set_bit_arr1(32,0),set_bit_arr2(32,0);
        for(auto x:arr1){
        	int temp=x;
        	int pos=0;
        	while(temp){
        		if(temp&1)
        			set_bit_arr1[pos]++;
        		temp>>=1;
        		pos++;
        	}
        }
        for(auto x:arr2){
        	int temp=x;
        	int pos=0;
        	while(temp){
        		if(temp&1)
        			set_bit_arr2[pos]++;
        		temp>>=1;
        		pos++;
        	}
        }
        vl ans(32,0);
        for(int i=0;i<32;i++){
        	// ans[i]=set_bit_arr1[i]*set_bit_arr2[i];
        	if(set_bit_arr1[i]>0&&set_bit_arr2[i]>0){
        		if(set_bit_arr1[i]%2==0||set_bit_arr2[i]%2==0)
        			ans[i]=2;
        		else
        			ans[i]=1;
        	}
        	else
        		ans[i]=0;
        }
        int final_ans=0;
        for(int i=0;i<32;i++){
        	if(ans[i]&1){
        		final_ans+=pow(2,i);
        	}
        }
        return final_ans;
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