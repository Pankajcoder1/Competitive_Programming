/*
	written by Pankaj Kumar.
	country:-INDIA
*/
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n,m,sum=0;
	cin>>n>>m;
	int *arr=new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	for(int i=0;i<n;i++)
	{
		if(arr[i]<=0 && i<m)
		{
			sum=sum+arr[i];
		}
	}
	if(sum>=0)
		cout<<sum;
	else
		cout<<(-sum);
}