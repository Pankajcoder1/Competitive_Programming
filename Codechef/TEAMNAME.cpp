/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

/* tc
1
4
hell bell cest test
*/
long long solve()
{
    ll n;
    scanf("%lld",&n);
    ll ans=0;
    vector<string> v(n);
    map<string,array<ll,26>> m;
    for(ll i=0;i<n;i++)
        cin>>v[i];

    for(ll i=0;i<n;i++)
    {
        string temp=v[i].substr(1);
        m[temp][v[i][0]-'a']++;
        // cout<<"temp is "<<temp<<endl;
    }

    for(auto w:m)
    {
        for(auto x:m)
        {
            if(x.first!=w.first)
            {
                ll sum1=0,sum2=0;
                for(ll i=0;i<26;i++)
                {
                    if(x.second[i]!=0&&w.second[i]==0)
                    {
                        // cout<<"in m first is "<<char('a'+i)<<endl;
                        sum1+=x.second[i];
                    }
                    if(x.second[i]==0&&w.second[i]!=0)
                    {
                        // cout<<"in m2 first is "<<char('a'+i)<<endl;
                        sum2+=w.second[i];
                    }
                }
                ans+=sum1*sum2;
            }
        }
    }
    
    printf("%lld\n",ans);
    return 0;
}

int main()
{
    // #ifndef ONLINEJUDGE
    //    freopen("input.txt","r",stdin);
    //    freopen("output.txt","w",stdout);
    // #endif
    long long test;
    cin>>test;
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