/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef vector<ll> vl;
typedef vector<bool> vb;
typedef vector<char> vc;
typedef map<ll,ll> ml;
typedef set<char>sc;
typedef set<ll> sl;
#define pan cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
// define values.
#define mod 1000000007
#define phi 1.618
/* Bit-Stuff */
#define get_set_bits(a) (__builtin_popcount(a))
#define get_set_bitsll(a) ( __builtin_popcountll(a))
#define get_trail_zero(a) (__builtin_ctz(a))
#define get_lead_zero(a) (__builtin_clz(a))
#define get_parity(a) (__builtin_parity(a))
/*  Abbrevations  */
#define ff first
#define ss second
#define mp make_pair
#define line cout<<endl;
#define pb push_back
#define Endl "\n"
// loops
#define forin(arr,n) for(ll i=0;i<n;i++) cin>>arr[i];
// Some print
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
#define cc ll test;cin>>test;while(test--)
// sort
#define all(V) (V).begin(),(V).end()
#define srt(V) sort(all(V))
#define srtGreat(V) sort(all(V),greater<ll>())
// function

// datatype definination
#define ordered_set tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>

/* ascii value 
A=65,Z=90,a=97,z=122
*/
/*  -----------------------------------------------------------------------------------*/

void multiply(ll F[2][2], ll M[2][2]); 
void power(ll F[2][2], ll n); 

// Function that returns nth Fibonacci number 
ll fib(ll n) 
{ 
    ll F[2][2] = {{1, 1}, {1, 0}}; 
    if (n == 0) 
        return 0; 
    power(F, n - 1); 

    return F[0][0]%mod; 
} 

// Optimized version of power() in method 4 
void power(ll F[2][2], ll n) 
{ 
    if(n == 0 || n == 1) 
    return; 
    ll M[2][2] = {{1, 1}, {1, 0}}; 
    
    power(F, n / 2); 
    multiply(F, F); 
    
    if (n % 2 != 0) 
        multiply(F, M); 
} 

void multiply(ll F[2][2], ll M[2][2]) 
{ 
    ll x = ((F[0][0]%mod)*(M[0][0]%mod)+(F[0][1]%mod)*(M[1][0]%mod))%mod; 
    ll y = ((F[0][0]%mod)*(M[0][1]%mod)+(F[0][1]%mod)*(M[1][1]%mod))%mod; 
    ll z = ((F[1][0]%mod)*(M[0][0]%mod)+(F[1][1]%mod)*(M[1][0]%mod))%mod; 
    ll w = ((F[1][0]%mod)*(M[0][1]%mod)+(F[1][1]%mod)*(M[1][1]%mod))%mod; 
    
    F[0][0] = x%mod; 
    F[0][1] = y%mod; 
    F[1][0] = z%mod; 
    F[1][1] = w%mod; 
} 

// Driver code 
int main() 
{ 
    cc
    {
        ll n;
        cin>>n;
        cout<<fib(n+2)%mod<<endl;
    }
    return 0; 
} 

// This code is contributed by Nidhi_biet 
