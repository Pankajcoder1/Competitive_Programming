/*
    written by Pankaj Kumar.
    country:-INDIA
    Institute: National Institute of Technology, Uttarakhand
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

long long solve()
{
    ll n,e,h,a,b,c;
    scanf("%lld%lld%lld%lld%lld%lld",&n,&e,&h,&a,&b,&c);
    // cin>>n>>e>>h>>a>>b>>c;
    
    ll mini=LONG_MAX;

    // let fix cake
    // a->omlette, b-> shake, c->cake
    for(ll x=0;x<=min({e,h});x++){
        // cout<<"x is "<<x<<endl;
        ll ans=0;
        ll temp_e=e-x;
        ll temp_h=h-x;
        ll omelette=temp_e/2;
        ll shake=temp_h/3;
        if(x<n){
            if(a>b){
                ll temp_shake=min({shake,n-x});
                ll temp_n=x+temp_shake;
                ans=x*c+temp_shake*b;
                if(temp_n<=n){
                    ll req=n-temp_n;
                    if(omelette>=req){
                        ans+=req*a;
                        mini=min(mini,ans);
                        // cout<<"ans at x "<<x<<" "<<ans<<endl;
                    }
                }
            }
            else{
                ll temp_omelette=min({n-x,omelette});
                ll temp_n=x+temp_omelette;
                ans=x*c+temp_omelette*a;
                if(temp_n<=n){
                    ll req=n-temp_n;
                    if(shake>=req){
                        ans+=req*b;
                        mini=min(mini,ans);
                        // cout<<"ans at x "<<x<<" "<<ans<<endl;
                    }
                }
            }
        }
        else{
            mini=min(mini,(n*c));
        }
        
        
    }
    if(mini==LONG_MAX)
        mini=-1;
    // cout<<mini<<endl;
    printf("%lld\n",mini);
    return 0;
}

int main()
{
    // #ifndef ONLINEJUDGE
    //    freopen("input.txt","r",stdin);
    //    freopen("output.txt","w",stdout);
    // #endif
    long long test=1;
    // cin>>test;
    scanf("%lld",&test);
    while(test--)
    {
        solve();
    }
    return 0;
}
/* stuff you should look before submission 
* int overflow
* special test case (n=0||n=1||n=2)
* don't get stuck on one approach if you get wrong answer
*/