/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
ll modulo=1000000007;

ll power(ll a,ll b,ll modulo)
{
    ll ans=1;
    while(b>0)
    {
        if(b&1)
        {
            ans=(ans*a)%modulo;
        }
        b>>=1;
        a=(a*a)%modulo;
    }
    return (ans%modulo);
}

int main()
{
    ll test;
    cin>>test;
    while(test--)
    {
        ll n;
        cin>>n;
        if(n==1||n==2||n==3||n==0)
            cout<<n<<endl;
        else
        {
            ll ans=1;
            ll temp=n/3;
            if((n%3)==1)
            {
                temp--;
                ans=power(3,temp,modulo);
                ans%=modulo;
                ans*=4;
                ans%=modulo;
                cout<<ans<<endl;
            }
            else if((n%3)==0)
            {
                ans=power(3,temp,modulo);
                ans%=modulo;
                cout<<ans<<endl;
            }
            else
            {
                ans=power(3,temp,modulo);
                ans%=modulo;
                ans*=(n%3);
                ans%=modulo;
                cout<<ans<<endl;
            }
        }
    }
}

/* stuff you should look before submission 
* ll overflow
* special test case (n=0||n=1||n=2)
* don't get stuck on one approach if you get wrong answer
*/