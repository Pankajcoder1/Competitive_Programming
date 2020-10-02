#include<iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(false);
	cout.tie(false);
	long int N,temp=0;
	cin>>N;
	for(long int i=1;i<=N;i++)
	{
		cin>>temp;
	}	

	if(temp%10==0)
		cout<<"Yes";
	else
		cout<<"No";	
}