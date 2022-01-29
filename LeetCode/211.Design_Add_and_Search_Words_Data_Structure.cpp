/*
	written by Pankaj Kumar.
	country:-INDIA
	Institute: National Institute of Technology, Uttarakhand
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
ll ppow(ll n, ll m, ll mod){
	if(m==0) return 1;
	ll tmp=ppow(n, m/2, mod);
	tmp=tmp*tmp%mod;
	return m%2 ? tmp*n%mod: tmp;
}
namespace mod_operations{
	ll modInv(ll n, ll mod){
		return ppow(n,mod-2, mod);
	}
	ll modAdd(ll n, ll m, ll mod){
		n=(n%mod+mod)%mod; m=(m%mod+mod)%mod;
		return (n+m)%mod;
	}
	ll modMul(ll n, ll m, ll mod){
		n=(n%mod+mod)%mod; m=(m%mod+mod)%mod;
		return n*m %mod;
	}
	ll modSub(ll n, ll m, ll mod){
		n=(n%mod+mod)%mod; m=(m%mod+mod)%mod;
		return modAdd(n,-m, mod);
	}
	ll modDiv(ll n, ll m, ll mod){
		return modMul(n, modInv(m, mod), mod);
	}
}
using namespace mod_operations;


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

class WordDictionary {
	public:
	class Node{
		public:
			Node* child[26];
			bool isEnd;
			Node(){
				isEnd=false;
				for(int i=0;i<26;i++){
					child[i]=NULL;
				}
			}
	};

	class Trie{
		public:
			Node* root;
			Trie(){
				root=new Node();
			}

			void insert(string& s){
				Node* current=root;
				for(int i=0;i<s.size();i++){
					int index=s[i]-'a';
					if(current->child[index]==NULL){
						current->child[index]=new Node();
					}
					current=current->child[index];
				}
				current->isEnd=true;
			}

			bool isFound(string& s, Node* node, int it=0){
				if(!node){
					return false;
				}
				if(it==sz(s)){
					return node->isEnd;
				}
				if(s[it]!='.'){
					return isFound(s,node->child[s[it]-'a'],it+1);
				}
				else{
					for(int i=0;i<26;i++){
						if(isFound(s,node->child[i],it+1)){
							return true;
						}
					}
					return false;
				}
			}
	};

	Trie t1;

    WordDictionary() {
        
    }
    
    void addWord(string word) {
        t1.insert(word);
    }
    
    bool search(string word) {
        return t1.isFound(word,t1.root);
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */


/* -----------------END OF PROGRAM --------------------*/
/*
* stuff you should look before submission
* constraint and time limit
* int overflow
* special test case (n=0||n=1||n=2)
* don't get stuck on one approach if you get wrong answer
*/