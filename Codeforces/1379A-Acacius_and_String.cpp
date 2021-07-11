/*
    written by Pankaj Kumar.
    country:-INDIA
    Institute: National Institute of Technology, Uttarakhand
*/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long ll ;
typedef unsigned long long ull;
typedef vector<ll> vl;
typedef vector<vector<ll>> vvl;
#define speed cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
/*  Abbrevations  */
#define ff first
#define ss second
#define mp make_pair
#define line cout<<endl;
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
// template
template <typename T>
T mymax(T x,T y)
{
    return (x>y)?x:y;
}
// function
ll power(ll x,ll y,ll mod)
{
    ll res=1;
    // x=x%mod;
    while(y>0)
    {
        if(y%2==1)
        {
            res*=x;
            // res=res%mod;
        }
        y/=2; x*=x; // x=x%mod;
    }
    return res;
}
ll str_to_num(string s)
{
    stringstream pk(s);
    ll num;
    pk>>num;
    return num;
}
string num_to_str(ll num)
{
    return to_string(num);
}
// datatype definination
#define ordered_set tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>
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

string pattern="abacaba";
 
int count(string s){
	int cnt=0;
	for(int i=0;i<s.length()-6;i++){
		bool flag=true;
		for(int j=0;j<7;j++){
			if(s[i+j]==pattern[j]) continue;
			else {
				flag=false;
				break;
			}
		}
		if(flag==true) cnt++;
	}
	return cnt;
}
 
bool check(string s,int ind){
	string s2=s;
	bool flag=true;
	s=s2;
	for(int j=0;j<7;j++){
		if(s[ind+j]==pattern[j] || s[ind+j]=='?') continue;
		else {
			flag=false;
			break;
		}
	}
	if(flag==true){
		for(int i=0;i<7;i++){
			if(s[ind+i]=='?') s[ind+i]=pattern[i]; 
		}
		for(int i=0;i<s.length();i++){
			if(s[i]=='?') s[i]='z'; 
		}
		if(count(s)==1){
			cout<<"Yes"<<endl;
			cout<<s<<endl;
			return true;
		}
	}
	return false;
}
 
ll solve()
{
    bool flag=false;
    int n;
	cin>>n;
	string s;
	cin>>s;
	int freq=count(s);
	if(freq==1){
	    for(int i=0;i<n;i++){
		 	if(s[i]=='?') s[i]='z';
		}
		cout<<"Yes"<<endl;
		cout<<s<<endl;
	}
	else if(freq>1){
		cout<<"No"<<endl;
	}
	else{
		flag=false;
		for(int i=0;i<=n-7;i++){
		 	if(check(s,i)) {
		 		flag=true;
		 		break;
		 	}
		else if(s[i]=='?') s[i]='z';
		}
	if(flag==false)
        cout<<"No"<<endl;
	}
    return 0;
}
int main()
{
    speed;
    /* #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif */
    ll TestCase=1;
    cin>>TestCase;
    while(TestCase--)
    {
        solve();
    }
}
/* -----------------END OF PROGRAM --------------------*/
/*
* stuff you should look before submission
* constraint and time limit
* int overflow
* special test case (n=0||n=1||n=2)
* don't get stuck on one approach if you get wrong answer
*/