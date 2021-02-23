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
#define cc ll test;cin>>test;while(test--)
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
// function

ll power(ll x,ll y)
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
// datatype definination
#define ordered_set tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>

/* ascii value 
A=65,Z=90,a=97,z=122
*/
/*  -----------------------------------------------------------------------------------*/
char P[][110]={"If you want to call a taxi, you should call: ","If you want to order a pizza, you should call: ",   "If you want to go to a cafe with a wonderful girl, you should call: "};
int R[110][3],X[3],i,j,n,k;
int main()
{
    scanf("%d",&n);
    char M[110][24];
    for(i=0;i<n;i++)
    {
        scanf("%d%s",&k,M[i]);
        for(j=0;j<k;j++)
        {
            char a[10];
            scanf("%s",a);
            if(a[0]==a[1] && a[0]==a[3] && a[0]==a[4] && a[0]==a[6] && a[0]==a[7])R[i][0]++;
            else if(a[0]>a[1] && a[1]>a[3] && a[3]>a[4] && a[4]>a[6] && a[6]>a[7])R[i][1]++;
                 else R[i][2]++;
        }
        for(j=0;j<3;j++)
            if(R[i][j]>X[j])X[j]=R[i][j];
    }
    for(i=0;i<3;i++)
    {
        cout<<P[i];
        bool C=0;
        for(j=0;j<n;j++)
            if(R[j][i]==X[i])
            {
                if(C)printf(", ");
                C=1;
                cout<<M[j];
            }
        puts(".");
    }
}
/* stuff you should look before submission 
* int overflow
* special test case (n=0||n=1||n=2)
* don't get stuck on one approach if you get wrong answer
*/