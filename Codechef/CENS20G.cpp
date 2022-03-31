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
    cc
    {
        string s;
        cin>>s;
        ll x,y;
        scanf("%lld%lld",&x,&y);
        ll q;
        cin>>q;
        ll l=0,r=0,u=0,d=0;
        for(auto x:s)
        {
            if(x=='R')
                r++;
            else if(x=='L')
                l++;
            else if(x=='U')
                u++;
            else
                d++;
        }
        while(q--)
        {
            ll a,b;
            ll ans=0;
            scanf("%lld%lld",&a,&b);
            ll flag=0;
            ll temp1=0,temp2=0;
            if(a>x)
            {
                if(b>y)
                {
                    temp1=a-x;
                    temp2=b-y;
                    if(temp1<=r&&temp2<=u)
                    {
                        flag=1;
                        ans=temp2+temp1;
                    }
                }
                else
                {
                    temp1=a-x;
                    temp2=y-b;
                    if(temp1<=r&&temp2<=d)
                    {
                        flag=1;
                        ans=temp2+temp1;
                    }
                }
            }
            else
            {
                if(b>y)
                {
                    temp1=x-a;
                    temp2=b-y;
                    if(temp1<=l&&temp2<=u)
                    {
                        flag=1;
                        ans=temp2+temp1;
                    }
                }
                else
                {
                    temp1=x-a;
                    temp2=y-b;
                    if(temp1<=l&&temp2<=d)
                    {
                        flag=1;
                        ans=temp1+temp2;
                    }
                }
            }
            if(flag==1)
            {
                printf("YES %lld\n",ans);
            }
            else
                printf("NO\n");
        }
    }
}