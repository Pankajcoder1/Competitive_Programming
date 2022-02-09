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
#define printv(v) for(ll i=0;i<ll(v.size());i++){cout<<v[i]<<" ";} line;
#define precision(x) cout<<fixed<<setprecision(x);
#define sz(V) ll(V.size())
// datatype definination
#define ordered_set tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>


ll ppow(ll n, ll m, ll mod){
	if(m==0) return 1;
	ll tmp=ppow(n, m/2, mod);
	tmp=tmp*tmp%mod;
	return m%2 ? tmp*n%mod: tmp;
}
namespace mod_operations{
	ll modInv(ll n, ll mod){
		return ppow(n,mod-2, mod);
	}
	ll modAdd(ll n, ll m, ll mod){
		n=(n%mod+mod)%mod; m=(m%mod+mod)%mod;
		return (n+m)%mod;
	}
	ll modMul(ll n, ll m, ll mod){
		n=(n%mod+mod)%mod; m=(m%mod+mod)%mod;
		return n*m %mod;
	}
	ll modSub(ll n, ll m, ll mod){
		n=(n%mod+mod)%mod; m=(m%mod+mod)%mod;
		return modAdd(n,-m, mod);
	}
	ll modDiv(ll n, ll m, ll mod){
		return modMul(n, modInv(m, mod), mod);
	}
}
using namespace mod_operations;


class Codeforces
{
	private:
		// read only variable
		const ll INF=1e18;
		const ll mod1=1e9+7;
		const ll mod2=998244353;


	public:
		Codeforces(){

		}

		ll power(ll x,ll y){
			ll result=1;
			while(y>0){
				if(y&1){
					result*=x;
				}
				y>>=1;
				x*=x;
			}
			return result;
		}

		ll power(ll x,ll y,ll mod){
			ll result=1;
			x%=mod;
			while(y>0){
				if(y&1){
					result*=x;
					result%=mod;
				}
				y>>=1;
				x*=x;
				x%=mod;
			}
			return result;
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
		// Techniques :
		// divide into cases, brute force, pattern finding
		// sort, greedy, binary search, two pointer
		// transform into graph

		// Experience :
		// Cp is nothing but only observation and mathematics.
		ll solve()
		{
			ll n;
            cin>>n;
            vl v(n);
            forin(v,n);
            vector<ll> bit(33,0);
            for(auto x:v){
                int num=x;
                int pos=0;
                while(num){
                    if(num&1){
                        bit[pos]++;
                    }
                    num>>=1;
                    pos++;
                }
            }
            ll hcf=0;
            for(ll i=0;i<33;i++){
                hcf=__gcd(hcf,bit[i]);
            }
            // cout<<"hcf "<<hcf<<endl;
            if(hcf==0){
                for(ll i=1;i<=n;i++){
                    cout<<i<<" ";
                }
                line;
                return 0;
            }
            vl ans;
            // ans.pb(1);
            for(ll i=1;i<=sqrt(hcf);i++){
                if(hcf%i==0){
                    if(i*i==hcf){
                        ans.pb(i);
                    }
                    else{
                        ans.pb(i);
                        ans.pb(hcf/i);
                    }
                }
            }
            srt(ans);
            for(auto x:ans){
                cout<<x<<" ";
            }
            line;
			return 0;
		}
};


/*  --------------------MAIN PROGRAM----------------------------*/

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
		Codeforces cf;
		cf.solve();
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