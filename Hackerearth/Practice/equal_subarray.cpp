#include<iostream>
using namespace std;

int main()
{
	int N,K;
	cin>>N>>K;
	int *arr=new int[N];
	for(int i=0;i<N;i++)
	{
		cin>>arr[i];
	}
	cout<<"array is ";
	for(int i=0;i<N;i++)
	{
		cout<<arr[i];
	}
}