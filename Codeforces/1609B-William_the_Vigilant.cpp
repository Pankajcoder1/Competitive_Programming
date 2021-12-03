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
			ll n,q;
            cin>>n>>q;
            string s;
            cin>>s;
            vector<bool>check(n,false);
            ll ans=0;
            for(ll i=0;i+2<n;i++){
                if(s[i]=='a'&&s[i+1]=='b'&&s[i+2]=='c'){
                    ans++;
                    check[i]=true;
                    check[i+1]=true;
                    check[i+2]=true;
                }
            }
            // cout<<"ans is "<<ans<<endl;
            while(q--){
                ll pos;
                char c;
                cin>>pos>>c;
                pos--;
                if(check[pos]){
                    if(s[pos]=='a'){
                        if(c=='a'){
                            // do nothing
                        }
                        else if(c=='b'){
                            ans--;
                            check[pos]=false;
                            check[pos+1]=false;
                            check[pos+2]=false;

                        }
                        else{
                            ans--;
                            check[pos]=false;
                            check[pos+1]=false;
                            check[pos+2]=false;
                            ll flag=0;
                            if(pos-1>=0&&s[pos-1]=='b'){
                                flag++;
                            }
                            if(pos-2>=0&&s[pos-2]=='a'){
                                flag++;
                            }
                            if(flag==2){
                                ans++;
                                check[pos]=true;
                                check[pos-1]=true;
                                check[pos-2]=true;
                            }                            
                        }
                    }
                    else if(s[pos]=='b'){
                        if(c=='b'){
                            // do nothing
                        }
                        else{
                            ans--;
                            check[pos]=false;
                            check[pos+1]=false;
                            check[pos-1]=false;
                        }
                    }
                    else{
                        if(c=='c'){
                            // do nothing
                        }
                        else if(c=='b'){
                            ans--;
                            check[pos]=false;
                            check[pos-1]=false;
                            check[pos-2]=false;
                        }
                        else{
                            ans--;
                            check[pos]=false;
                            check[pos-1]=false;
                            check[pos-2]=false;
                            ll flag=0;
                            if(pos+1<n&&s[pos+1]=='b'){
                                flag++;
                            }
                            if(pos+2<n&&s[pos+2]=='c'){
                                flag++;
                            }
                            if(flag==2){
                                ans++;
                                check[pos]=true;
                                check[pos+1]=true;
                                check[pos+2]=true;
                            }                            
                        }
                    }
                    s[pos]=c;
                }
                else{
                    // yes
                    s[pos]=c;
                    ll flag=0;
                    // cout<<"temp_string is "<<temp_string<<endl;
                    for(ll i=pos;i<=pos+2;i++){
                        if(i<n&&s[i]==char('a'+i-pos)){
                            flag=1;
                        }
                        else{
                            flag=0;
                            break;
                        }
                    }
                    if(flag){
                        ans++;
                        check[pos]=true;
                        check[pos+1]=true;
                        check[pos+2]=true;
                    }
                    flag=0;
                    for(ll i=pos-2;i<=pos;i++){
                        if(i<n&&s[i]==char('a'+i-pos+2)){
                            flag=1;
                        }
                        else{
                            flag=0;
                            break;
                        }
                    }
                    if(flag){
                        ans++;
                        check[pos]=true;
                        check[pos-1]=true;
                        check[pos-2]=true;
                    }
                    if((pos-1>=0&&s[pos-1]=='a')&&(pos+1<n&&s[pos+1]=='c')&&s[pos]=='b'){
                        ans++;
                        check[pos]=true;
                        check[pos-1]=true;
                        check[pos+1]=true;
                    }
                }
                // cout<<"string is "<<s<<endl;
                // printv(check);
                cout<<ans<<endl;
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
	// cin>>TestCase;
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