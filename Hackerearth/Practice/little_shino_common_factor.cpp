#include<iostream>
#include<math.h>
using namespace std;
long int hcf(long int a,long int b);

int main()
{
	long int a,b,count=0,temp;
	cin>>a>>b;
	if(a>b)
	{
		temp=a;
		a=b;
		b=temp;
	}
	temp=hcf(a,b);
	for(long int i=1;i<=sqrt(temp)+1;i++)
	{
		if(a%i==0 && b%i==0)
		{
			count ++;
		}
	}
	cout<<count;
}

long int hcf(long int a,long int b)
{
	if(b%a==0)
		return b;
	else
		return hcf(b,b%a);
}