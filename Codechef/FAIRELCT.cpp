/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include<bits/stdc++.h>
using namespace std;

long long solve()
{
    long long n,m;
    cin>>n>>m;
    long long sum1=0,sum2=0,count=0;
    vector<long long> a(n),b(m);
    for(long long i=0;i<n;i++)
    {
    	cin>>a[i];
    	sum1+=a[i];
    }
    for(long long i=0;i<m;i++)
    {
    	cin>>b[i];
    	sum2+=b[i];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end(),greater<long long>());
    long a_pos=0,b_pos=0;
    while(1)
    {
    	if(sum1>sum2)
    	{
    		cout<<count<<endl;
    		return 0;
    	}
    	if(a_pos>=n||b_pos>=m)
    		break;
    	sum1-=a[a_pos];
    	sum2-=b[b_pos];
    	sum1+=b[b_pos];
    	sum2+=a[a_pos];
    	a_pos++;
    	b_pos++;
    	count++;
    }
    cout<<-1<<endl;
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