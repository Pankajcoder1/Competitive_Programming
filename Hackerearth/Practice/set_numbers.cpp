#include<iostream>
using namespace std;
#include<math.h>


int main()
{
	int t,N,z=0;
	int *arr=new int[31];
	for(int i=0;i<=30;i++)
	{
		arr[i]=(pow(2,i)-1);
	}
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>N;
		int previous;
		for(int j=0;j<30;j++)
		{
			previous=arr[j];
			if(N<arr[j+1])
			{
				cout<<previous<<endl;
				break ;
			}
		}
	}
}