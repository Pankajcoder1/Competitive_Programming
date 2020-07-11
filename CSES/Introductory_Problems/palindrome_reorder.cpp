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

ll power(ll x,ll y)
{
	ll res=1;
	while(y>0)
	{
		if(y%2==1)res*=x;
		y/=2; x*=x;
	}
	return res;
}
/* ascii value 
A=65,Z=90,a=97,z=122
*/
/*  -----------------------------------------------------------------------------------*/


int main()
{
	string s;
	cin>>s;
	vl v(26,0);
	loop(i,0,s.length())
	{
		v[s[i]-'A']++;
	}
	ll odd=0;
	for(auto s:v)
		if(s%2==1)
			odd++;

	if(s.length()%2==0&&odd>0)
		cout<<"NO SOLUTION"<<endl;
	else if(s.length()%2==1&&odd>1)
		cout<<"NO SOLUTION"<<endl;
	else
	{
		string s1="";
		string temp="";
		loop(i,0,26)
		{
			if(v[i]%2==0)
			{
				ll count=v[i]/2;
				loop(j,0,count)
				{
					s1+=char('A'+i);
				}
			}
			else
			{
				ll count1=v[i]/2;
				ll count2=v[i]%2;
				loop(j,0,count1)
				{
					s1+=char('A'+i);
				}
				loop(j,0,count2)
				{
					temp+=char('A'+i);
				}
			}
		}
		cout<<s1<<temp;
		reverse(s1.begin(),s1.end());
		cout<<s1<<endl;
	}

	
}