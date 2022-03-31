/*
    written by Pankaj Kumar.
    country:-INDIA
    Institute: National Institute of Technology, Uttarakhand
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define sz(V) ll(V.size())
#define ss second
#define ff first

// slope jada ho ya equal ho to chalega
long long solve()
{
    ll n;
    ll maxo=0;
    scanf("%lld",&n);
    vector<pair<ll,ll>> p,temp;
    for(ll i=0;i<n;i++){
        ll a;
        scanf("%lld",&a);
        p.pb({i+1,a});
    }
    if(n==2){
        cout<<1<<endl;
        return 0;
    }
    temp.pb(p[0]);
    temp.pb(p[1]);
    maxo=1;
    for(ll i=2;i<n;i++){
        while(sz(temp)>=2){
            if(sz(temp)<2)
                break;
            double temp1=(double(temp[sz(temp)-1].ss)-(double(temp[sz(temp)-2].ss)))/(double(temp[sz(temp)-1].ff)-double(temp[sz(temp)-2].ff));
            double temp2=(double(p[i].ss)-double(temp[sz(temp)-1].ss))/(double(p[i].ff)-double(temp[sz(temp)-1].ff));
            if(temp2>=temp1){
                temp.pop_back();

            }
            else
                break;
        }
        temp.pb(p[i]);
        ll temp_length=abs(temp[sz(temp)-1].ff-temp[sz(temp)-2].ff);
        maxo=max(maxo,temp_length);
    }
    printf("%lld\n",maxo);
    // cout<<maxo<<endl;
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