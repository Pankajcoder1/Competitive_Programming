#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	int T;
	long int len,count;
	string a,b;
	cin>>T;
	for(int i=0;i<T;i++)
	{
		
		cin>>a>>b;
		len=a.length();
		for(int j=0;j<len;j++)
		{
			count=0;
			for(int k=0;k<len;k++)
			{
				if(a[j]==b[k])
				{
					b[k]='@';
					count++;
					break;
				}
			}
			// If first one is not match thn break it.
			if(count==0)
			{
				cout<<"NO\n";
				break;
			}
		}
		if(count!=0)
		{
			cout<<"YES\n";
		}
	}
}