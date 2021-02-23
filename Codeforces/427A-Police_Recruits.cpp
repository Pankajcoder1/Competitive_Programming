/*
	written by Pankaj Kumar.
	country:-INDIA
*/
#include <iostream>
#include<math.h>
using namespace std;

int main()
{
	int n,no,count=0,rem=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>no;
		if(no>0)
		{
			count=count+no;
		}
		else if(no<0)
		{
			if(count<=0)
			{
				rem=rem+1;
			}
			else
			{
				count=count+no;
			}
		}
	}
	cout<<rem;
}