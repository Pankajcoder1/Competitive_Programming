#include<iostream>
using namespace std;

int main()
{
	int N,sum=0,d;
	cin>>N;
	int *arr = new int[N];
	for(int i=0;i<N;i++)
	{
		cin>>arr[i];
		sum = sum+arr[i];
	}
	if(sum%N==0)
		d=sum/N;
	else
		d=(sum/N);
	cout<<d+1;
}