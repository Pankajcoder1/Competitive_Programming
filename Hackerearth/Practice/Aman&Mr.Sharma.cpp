#include<iostream>
using namespace std;

int main()
{
	int d,r,x,count=0;
	cin>>d;
	for(int i=0;i<d;i++)
	{
		cin>>r>>x;
		if((2*22*r)/7<=(100*x))
		{
			count++;
		}
	}
	cout<<count;
}