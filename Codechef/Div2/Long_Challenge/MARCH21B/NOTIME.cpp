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
    ll n,h,x;
    cin>>n>>h>>x;
    ll flag=0;
    for(ll i=0;i<n;i++){
    	ll temp;
    	cin>>temp;
    	if((temp+x)>=h)
    		flag++;
    }
    if(flag)
    	cout<<"YES"<<endl;
    else
    	cout<<"NO"<<endl;
    return 0;
}

int main()
{
    // #ifndef ONLINEJUDGE
    //    freopen("input.txt","r",stdin);
    //    freopen("output.txt","w",stdout);
    // #endif
    long long test=1;
    // scanf("%lld",&test);
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