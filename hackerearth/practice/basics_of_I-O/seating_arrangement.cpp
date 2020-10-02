#include<iostream>
using namespace std;

int main()
{
	long int T,N,temp;
	cin>>T;
	for(long int i=0;i<T;i++)
	{
		cin>>N;
		temp=N%12;
		if(temp==1||temp==6||temp==7||temp==0)
		{
			if(temp==1)
			{
				cout<<N+11;
			}
			else if(temp==6)
			{
				cout<<N+1;
			}
			else if(temp==7)
				cout<<N-1;
			else
				cout<<N-11;
			cout<<" WS\n";
		}
		else if(temp==2||temp==5||temp==8||temp==11)
		{
			if(temp==2)
				cout<<N+9;
			else if(temp==5)
				cout<<N+3;
			else if(temp==8)
				cout<<N-3;
			else
				cout<<N-9;
			cout<<" MS\n";
		}
		else if(temp==3||temp==4||temp==9||temp==10)
		{
			if(temp==3)
				cout<<N+7;
			else if(temp==4)
				cout<<N+5;
			else if(temp==9)
				cout<<N-5;
			else
				cout<<N-7;
			cout<<" AS\n";
		}
	}
}