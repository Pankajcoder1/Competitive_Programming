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
    pan
    cc
    {
        string s1,s2;
        cin>>s1>>s2;
        if(s1.length()==s2.length())
        {
            cout<<s2<<endl;
        }
        else if(s2.length()==1)
        {
            srt(s1);
            cout<<s1<<endl;
        }
        else
        {
            vl v1(26,0),v2(26,0);
            loop0(s1.length())
                v1[s1[i]-'a']++;
            loop0(s2.length())
                v2[s2[i]-'a']++;
            char start=s2[0],next;
            loop(i,1,s2.length())
            {
                if(s2[i]!=s2[0])
                {
                    next=s2[i];
                    break;
                }
                if(i==s2.length()-1)
                {
                    next=s2[s2.length()-1];
                }
            }
            string res="";
            loop(i,0,26)
            {
                char c=char(i+97);
                if(c<start)
                {
                    if(v1[i]>v2[i])
                    {
                        string temp(v1[i]-v2[i],c);
                        res+=temp;
                        v1[i]=v2[i];
                    } 
                }
                else if(c==start)
                {
                    if(next<start)
                    {
                        res+=s2;
                    }
                    else
                    {
                        string temp(v1[i]-v2[i],c);
                        res+=temp;
                        v1[i]=v2[i];
                        res+=s2;
                    }
                    break;
                }
            } 
            loop(i,0,26)
            {
                v1[i]-=v2[i];
                if(v1[i]>0)
                {
                    string temp(v1[i],char(i+97));
                    res+=temp;
                }
            }
            cout<<res<<endl;
        }
    }
}