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
typedef set<int> si;
typedef set<ll> sl;
#define pan cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
// define values.
#define mod 1000000007;
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
#define loopi(a,b) for(int i=a;i<=b;i++)
// Some print
#define no cout<<"NO"<<endl
#define yes cout<<"YES"<<endl
/* ascii value 
A=65,Z=90,a=97,z=122
*/
/*  -----------------------------------------------------------------------------------*/

int main()
{
	pan;
	int test;
	cin>>test;
	while(test--)
	{
		int n,m,x,y;
		cin>>n>>m>>x>>y;
		char arr[n][m];
		char temp;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>temp;
				arr[i][j]=temp;
			}
		}
		int cost=0;
		for(int i=0;i<n;i++)
		{
			int count=0;
			for(int j=0;j<m;j++)
			{
				if(arr[i][j]=='.')
				{
					count++;
				}
				else
				{
					int temp2=count/2;
					cost+=min(2*x,y)*temp2;
					if(count%2!=0)
						cost+=x;
					count=0;
				}

			}
			if(count>0)
			{
				int temp2=count/2;
				cost+=min(2*x,y)*temp2;
				if(count%2!=0)
					cost+=x;
				count=0;
			}
		}
		cout<<cost<<endl;
	}
}