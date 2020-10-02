/*
	written by Pankaj Kumar.
	country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef set<pair<int,int>> spi;
typedef set<pair<ll,ll>> spl;
typedef vector<pair<int,int>> vpi;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<bool> vb;
typedef vector<char> vc;
typedef vector<pair<ll,ll>> vpl;
typedef vector<string> vs;
typedef map<int,int>mi;
typedef map<ll,ll> ml;
typedef set<string> ss;
typedef set<char>sc;
typedef set<int> si;
typedef set<ll> sl;
#define pan cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
// define values.
#define mod 1e9+7LL
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
#define loop(i,start,end) for(ll i=ll(start);i<ll(end);i++)
#define loop0(num) for(ll i=0;i<ll(num);i++)
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

ll power(ll x,   ll y, ll p)  
{  
    ll res = 1;      
    x = x % p;             
    while (y > 0)  
    {    
        if (y & 1)  
            res = (res*x) % p;   
        y = y>>1; 
        x = (x*x) % p;  
    }  
    return res;  
} 
/* ascii value 
A=65,Z=90,a=97,z=122 1=49
*/
/*  -----------------------------------------------------------------------------------*/
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);


int main()
{
	ll m,s;
    cin>>m>>s;
    if(s==0&&m>1||s>9*m)
        cout<<-1<<" "<<-1<<endl;
    else
    {
        ll temp=s;
        vl dp(m,0);
        if(m>1)
            dp[0]=1;
        temp--;
        for(ll i=m-1;i>=0;i--)
        {
            // cout<<"temp is "<<temp<<endl;
            if(temp>0)
            {
                if(temp>=9)
                {
                    temp=temp-9;
                    dp[i]+=9;
                }
                else
                {
                   dp[i]+=temp;
                   temp=0; 
                }
            }
            else
            {
                break;
            }
        }
        srt(dp);
        ll pos=0;
        if(m==1)
        {
            cout<<s;
        }
        else
        {
            for(ll i=0;i<m;i++)
            {
                if(dp[i]>0)
                {
                    cout<<dp[i];
                    pos=i;
                    break;
                }
            }
            for(ll i=0;i<pos;i++)
            {
                cout<<dp[i];
            }
            for(ll i=pos+1;i<m;i++)
            {
                cout<<dp[i];
            }
        }
        cout<<" ";
        vl dp2(m,0);
        for(ll i=0;i<m;i++)
        {
            if(s>0)
            {
                if(s>=9)
                {
                    s-=9;
                    dp2[i]+=9;
                }
                else
                {
                    dp2[i]=s;
                    s=0;
                }
            }
            else
            {
                break;
            }
        }
        srtGreat(dp2);
        for(ll i=0;i<m;i++)
        {
            cout<<dp2[i];
        }
        line;
    }
}