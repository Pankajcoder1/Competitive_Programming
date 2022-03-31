/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include<bits/stdc++.h>
using namespace std;

long long solve()
{
    int n;
    cin>>n;
    for(int i=10;i>=1;i--)
    {
    	if(n%i==0)
    	{
    		cout<<i<<endl;
    		return 0;
    	}
    }
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