/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll maxo=1e6+1;

long long solve(vector<ll>& number)
{
    ll x,y;
    scanf("%lld%lld",&x,&y);
    if(y==1)
    {
    	if(x<=2)
    		printf("%s\n","Chef");
    	else
    		printf("%s\n","Divyam");
    	return 0;
    }
    ll count=0;
    count=number[x];
    if(count>y)
    	printf("%s\n","Divyam");
    else
    	printf("%s\n","Chef");
    // cout<<"no of prime up to x is "<<count<<endl;
    return 0;
}

int main()
{
    // #ifndef ONLINEJUDGE
    //    freopen("input.txt","r",stdin);
    //    freopen("output.txt","w",stdout);
    // #endif
    long long test;
    scanf("%lld",&test);
    vector<bool>prime(maxo,true);
    for(ll i=2;i*i<=maxo;i++)
    {
    	if(prime[i])
    	{
    		for(ll j=i*i;j<maxo;j+=i)
    			prime[j]=false;
    	}
    }
    ll count=0;
    vector<ll> number(maxo,0);
    for(ll i=2;i<=maxo;i++)
    {
    	if(prime[i])
    		count++;
    	number[i]=count;
    }
    while(test--)
    {
        solve(number);
    }
    return 0;
}
/* stuff you should look before submission 
* int overflow
* special test case (n=0||n=1||n=2)
* don't get stuck on one approach if you get wrong answer
*/