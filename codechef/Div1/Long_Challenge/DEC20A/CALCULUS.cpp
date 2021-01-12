/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include<bits/stdc++.h>
using namespace std;
long long mod=998244353;
long long a=0,b=1;

long long inverse(long long x)
{
    long long res=1,y=mod-2;
    while(y>0)
    {
        if(y&1) res=(res*x)%mod;
        x=(x*x)%mod;
        y>>=1;
    }
    return res;
}
void fraction(long long x)
{
    a=(a*x+2*b)%mod;
    b=(b*x)%mod;
}

int main()
{
    long long n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        fraction(2*i-1);
    }
    long long hcf=__gcd(a,b);
    a/=hcf;
    b/=hcf;
    cout<<(a*inverse(b))%mod<<endl;
}

/* stuff you should look before submission 
* int overflow
* special test case (n=0||n=1||n=2)
* don't get stuck on one approach if you get wrong answer
*/