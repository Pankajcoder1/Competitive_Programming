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
ll str_to_num(string s){
            stringstream pk(s);
            ll num;
            pk>>num;
            return num;
        }

class Solution {
public:
    int largestInteger(int num) {
        vector<int> odd,even;
        int temp=num;
        while(temp){
            int d=temp%10;
            if(d&1){
                odd.pb(d);
            }
            else{
                even.pb(d);
            }
            temp/=10;
        }
        srtGreat(odd);
        srtGreat(even);
        string s=to_string(num);
        int pos1=0,pos2=0;
        for(int i=0;i<sz(s);i++){
            int d=s[i]-'0';
            if(d&1){
                s[i]=odd[pos1]+'0';
                pos1++;
            }
            else{
                s[i]=even[pos2]+'0';
                pos2++;
            }
        }
        return str_to_num(s);
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
