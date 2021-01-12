/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include<bits/stdc++.h>
using namespace std;

long long solve()
{
    long long m;
    cin>>m;
    long long count=0;
    long temp=0;
    unordered_map<long long,long long> pos,neg;
    while(m--)	
    {
    	long long k;
    	cin>>k;
    	for(long long i=0;i<k;i++)
    	{
    		cin>>temp;
	    	if(temp>0)
	    		pos[temp]++;
	    	else
	    		neg[temp]++;
	    }
    }
    cout<<pos.size()*neg.size()<<endl;
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