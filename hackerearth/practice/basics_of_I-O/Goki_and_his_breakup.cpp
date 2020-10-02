#include<iostream>
using namespace std;

int main()
{
	int N,X,Y;
	cin>>N>>X;
	for(int i=0;i<N;i++)
	{
		cin>>Y;
		if(Y>=X)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
}