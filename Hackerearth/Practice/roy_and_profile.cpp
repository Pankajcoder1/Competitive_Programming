#include<iostream>
using namespace std;

int main()
{
	int L,N,W,H;
	cin>>L>>N;
	for(int i=0;i<N;i++)
	{
		cin>>W>>H;
		if(W>=L&&H>=L)
		{
			if(W==H)
			{
				cout<<"ACCEPTED"<<endl;
			}
			else
				cout<<"CROP IT"<<endl;
		}
		else if(W<L||H<L)
		{
			cout<<"UPLOAD ANOTHER"<<endl;
		}
	}
}