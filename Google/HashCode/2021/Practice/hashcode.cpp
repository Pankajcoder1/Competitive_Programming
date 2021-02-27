/*
    written by Pankaj Kumar.
    country:-INDIA
    Institute: National Institute of Technology, Uttarakhand
*/
#include<bits/stdc++.h>
using namespace std;

long long solve()
{
    int m,t2,t3,t4;
    cin>>m>>t2>>t3>>t4;
    for(int i=0;i<m;i++)
    {
    	int t;
    	cin>>t;
    	string s;
    	while(t--)
    		cin>>s;
    }
    int total_2=0,total_3=0,total_4=0;
    total_2=min(t2,m/2);
    m-=(total_2*2);
    if(m>0)
    {
    	total_3=min(t3,m/3);
    	m-=(total_3*3);
    }
    if(m>0)
    {
    	total_4=min(t4,m/4);
    }
    cout<<total_3+total_4+total_2<<endl;
    int pos=0;
    for(int i=0;i<total_2;i++)
    {
    	cout<<2<<" ";
    	for(int j=0;j<2;j++)
    	{
    		cout<<pos<<" ";
    		pos++;
    	}
    	cout<<endl;
    }
    for(int i=0;i<total_3;i++)
    {
    	cout<<3<<" ";
    	for(int j=0;j<3;j++)
    	{
    		cout<<pos<<" ";
    		pos++;
    	}
    	cout<<endl;
    }
    for(int i=0;i<total_4;i++)
    {
    	cout<<4<<" ";
    	for(int j=0;j<4;j++)
    	{
    		cout<<pos<<" ";
    		pos++;
    	}
    	cout<<endl;
    }
    return 0;
}

int main()
{
    #ifndef ONLINEJUDGE
        freopen("e.txt","r",stdin);
        freopen("output5.txt","w",stdout);
    #endif
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