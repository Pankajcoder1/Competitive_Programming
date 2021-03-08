#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int c[2]={0};
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='L')
		{
			c[0]=c[0]-1;
		}
		else if(s[i]=='R')
		{
			c[0]=c[0]+1;
		}
		else if(s[i]=='U')
		{
			c[1]=c[1]+1;
		}
		else if(s[i]=='D')
		{
			c[1]=c[1]-1;
		}
	}
	cout<<c[0]<<" "<<c[1];
}