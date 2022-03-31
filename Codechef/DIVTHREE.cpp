/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include<bits/stdc++.h>
using namespace std;

long long solve()
{
    long long n,k,d;
    cin>>n>>k>>d;
    long long count=0,sum=0;
    for(long long i=0;i<n;i++)
    {
    	long long temp;
    	cin>>temp;
    	sum+=temp;
    }
    count=sum/k;
    count=min(count,d);
    cout<<count<<endl;
    return 0;
}

int main()
{
    // #ifndef ONLINEJUDGE
    //     freopen("input.txt","r",stdin);
    //     freopen("output.txt","w",stdout);
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