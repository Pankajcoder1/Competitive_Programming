#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	string a,b;
	int t,len_a,len_b,count=0;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		count=0;
		cin>>a>>b;
		len_a=a.length();
		len_b=b.length();
		for(int i=0;i<len_a;i++)
		{
			for(int j=0;j<len_b;j++)
			{
				if(a[i]==b[j])
				{
					// cout<<b[j]<<" ";
					b[j]='@';
					count++;
					break ;
				}
			}
		}
		cout<<(len_b+len_a-count-count)<<endl;
	}
}