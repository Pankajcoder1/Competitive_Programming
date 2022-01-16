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
            ll vertex_with_more_than_one_degree=0;
            vector<pair<ll,ll>> edges;
            map<ll,vector<ll>> m;
            map<pair<ll,ll>,ll> m1;
            vector<bool>check(n+1,false);
            for(ll i=1;i<n;i++){
                ll u,v;
                cin>>u>>v;
                m[u].pb(v);
                m[v].pb(u);
                edges.pb({min(u,v),max(u,v)});
            }
            for(auto x:m){
                // yes
                // cout<<x.ff<<" ";
                // for(auto y:x.ss){
                //     cout<<y<<" ";
                // }
                // line;
                if(x.ss.size()>2){
                    vertex_with_more_than_one_degree++;
                }
            }
            if(vertex_with_more_than_one_degree>0){
                cout<<-1<<endl;
            }
            else{
                ll vertex_with_degree_one=0;
                
                for(auto x:m){
                    if(x.ss.size()==1){
                        vertex_with_degree_one=x.ff;
                        break;
                    }
                }
                ll flag=0,count=n-1;
                while(count--){
                    // cout<<"with degree one "<<vertex_with_degree_one<<endl;
                    for(auto y:m[vertex_with_degree_one]){
                        // cout<<"  connecte "<<y<<endl;
                        if(check[y]==false){
                            // cout<<"y is "<<y<<endl;
                            m1[{min(vertex_with_degree_one,y),max(y,vertex_with_degree_one)}]=flag+2;
                            flag^=1;
                            check[vertex_with_degree_one]=true;
                            vertex_with_degree_one=y;
                            
                        }
                    }
                }
                for(auto x:edges){
                    cout<<m1[x]<<" ";
                }
                line;

            }

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