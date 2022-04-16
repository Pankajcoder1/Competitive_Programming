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

class ATM {
public:
    map<long,long> m;
    ATM() {
        m[20]=0;
        m[50]=0;
        m[100]=0;
        m[200]=0;
        m[500]=0;
    }
    
    void deposit(vector<int> banknotesCount) {
        m[20]+=banknotesCount[0];
        m[50]+=banknotesCount[1];
        m[100]+=banknotesCount[2];
        m[200]+=banknotesCount[3];
        m[500]+=banknotesCount[4];
    }
    
    vector<int> withdraw(int amount) {
        vector<int>v(5,0);
        ll ans=0;


        ans=amount/500;
        ans=min((ll)ans,(ll)m[500]);
        v[4]=ans;
        amount-=ans*500;


        ans=amount/200;
        ans=min((ll)ans,(ll)m[200]);
        v[3]=ans;
        amount-=ans*200;

        ans=amount/100;
        ans=min((ll)ans,(ll)m[100]);
        v[2]=ans;
        amount-=ans*100;

        ans=amount/50;
        ans=min((ll)ans,(ll)m[50]);
        v[1]=ans;
        amount-=ans*50;

        ans=amount/20;
        ans=min((ll)ans,(ll)m[20]);
        v[0]=ans;
        amount-=ans*20;
        
        if(amount!=0){
            return {-1};
        }

        m[20]-=v[0];
        m[50]-=v[1];
        m[100]-=v[2];
        m[200]-=v[3];
        m[500]-=v[4];
        return v;
    }
};

/**
 * Your ATM object will be instantiated and called as such:
 * ATM* obj = new ATM();
 * obj->deposit(banknotesCount);
 * vector<int> param_2 = obj->withdraw(amount);
 */


/* -----------------END OF PROGRAM --------------------*/
/*
* stuff you should look before submission
* constraint and time limit
* int overflow
* special test case (n=0||n=1||n=2)
* don't get stuck on one approach if you get wrong answer
*/
