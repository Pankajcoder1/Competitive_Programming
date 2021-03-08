#include<iostream>
using namespace std;

int main()
{
	int T,X;
	cin>>T;
	for(int i=0;i<T;i++)
	{
		cin>>X;
		for(int j=0;j<X;j++)
		{
			for(int k=0;k<2*X;k++)
			{
				if(j>=k||2*X-j-1<=k)
				{
					cout<<"*";
				}
				else
					cout<<"#";
			}
			cout<<"\n";
		}
		cout<<"\n";
	}
}