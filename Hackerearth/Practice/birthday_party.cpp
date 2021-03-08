#include<iostream>
using namespace std;

int main()
{
	int T,M,N;
	cin>>T;
	for(int i=0;i<T;i++)
	{
		cin>>N>>M;
		if(M%N==0)
		{
			cout<<"Yes"<<endl;
		}
		else
			cout<<"No"<<endl;
	}
}