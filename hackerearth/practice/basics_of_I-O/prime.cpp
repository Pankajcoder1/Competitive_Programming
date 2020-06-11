#include<iostream>
using namespace std;

int main()
{
	int no,count=0;
	cin>>no;
	for(int i=2;i<=no;i++)
		{
			count =0;
			for(int j=2;j<=i/2;j++)
			{
				if(i%j==0)
				{
					count++;
				}
			}
			if(count==0)
			{
				cout<<i<<" ";
			}
		}
}