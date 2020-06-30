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
#define loop(i,start,end) for(ll i=start;i<end;i++)
#define loop0(num) for(ll i=0;i<ll(num);i++)
// Some print
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
#define cc ll test;cin>>test;while(test--)
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

bool isVowel(char c) {
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        return true;
    }
 
    return false;
}
 
int main()
{
    pan
    string str;
    cin>>str;
    if(str.size() == 1)
    {
        if(isVowel(str[0]) || str[0] == 'n')
        {
            yes
        }
        else
        {
            no
        }
    }
    else
    {
        int flag = 0;
        loop0(str.size())
        {
            if(i < str.size() - 1)
            {
                if(!isVowel(str[i]) && str[i] != 'n')
                {
                    if(!isVowel(str[i + 1]))
                    {
                        flag = 1;
                        break;
                    }
                }
            }
            else
            {
                if(!isVowel(str[i]) && str[i] != 'n')
                {
                    flag = 1;
                    break;
                }
            }
        }
 
	if(flag == 0)
    	yes
    else
    	no
    }
}