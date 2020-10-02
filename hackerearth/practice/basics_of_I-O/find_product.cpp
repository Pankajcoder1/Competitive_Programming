#include<iostream>
using namespace std;

int main()
{
	int N,temp;
	long int pro=1;
	cin>>N;
	for(int i=0;i<N;i++)
	{
		cin>>temp;
		pro = (pro*temp)%1000000007;
	}
	cout<<pro;
}