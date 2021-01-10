#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	string n;
	int len=0,j;
	cin>>n;
	len=n.length();
	for(int i=0;i<len;i++)
	{
		j=n[i];
		if(j>=97&&j<=122)
		{
			j=j-32;
			n[i]=char(j);
		}
		else if(j>=65&&j<=90)
		{
			j=j+32;
			n[i]=char(j);
		}
	}
	cout<<n;
}