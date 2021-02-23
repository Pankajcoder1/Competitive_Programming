/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long ll ;
typedef vector<ll> vl;
#define speed cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
// define values.
// #define mod 1000000007
#define phi 1.618
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
// sort
#define all(V) (V).begin(),(V).end()
#define srt(V) sort(all(V))
#define srtGreat(V) sort(all(V),greater<ll>())
#define printv(v) for(ll i=0;i<ll(v.size());i++){cout<<v[i]<<" ";} line;
// some extra
#define sz(V) ll(V.size())
/* ONLINE JUDGE */
// #ifdef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
// #endif
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
    return stoi(s);
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
/*  -----------------------------------------------------------------------------------*/
ll kadane(int arr[], int size)
{
    ll maximum = INT_MIN;
    ll max_so_far = 0;
    ll best_so_far = 0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i] > maximum)
        {
          maximum = arr[i];
        }
        max_so_far += arr[i];
        if(max_so_far < 0){
          max_so_far = 0;
        }
        if(max_so_far > best_so_far){
          best_so_far = max_so_far;
        }
    }
    return (best_so_far>0)? best_so_far: maximum;
}
ll solve()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    ll kadaneSum = kadane(arr, n);
    if(k == 1){
      cout<<kadaneSum<<endl;
    }
    else{
      ll totalSum = 0,leftSum = INT_MIN,rightSum = INT_MIN;
      for(int i=0;i<n;i++){
        totalSum += arr[i];
        leftSum = max(leftSum, totalSum);
      }
      totalSum = 0;
      for(int i=n-1;i>=0;i--){
        totalSum += arr[i];
        rightSum = max(rightSum, totalSum);
      }
      if(totalSum < 0){
        cout<<max(leftSum + rightSum, kadaneSum)<<endl;
      }
      else{
        cout<<((leftSum + rightSum + (totalSum * (k-2))))<<endl;
      }
    }
    return 0;
}

int main()
{
    speed;
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    ll TestCase=1;
    cin>>TestCase;
    while(TestCase--)
    {
        solve();
    }
}

/* stuff you should look before submission 
* int overflow
* special test case (n=0||n=1||n=2)
* don't get stuck on one approach if you get wrong answer
*/