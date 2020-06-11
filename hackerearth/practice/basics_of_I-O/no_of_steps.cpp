#include<iostream>
using namespace std;
int equal(int *array,int size);


int main()
{
	int n,count=1000;
	cin>>n;
	int *a=new int[n];
	int *b=new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
	}
	while(equal(a,n)!=1)
	{
		count--;
		for(int i=0;i<n;i++)
		{
			if(a[i]>=b[i])
			{
				a[i]=a[i]-b[i];
			}
		}
	}
	cout<<(1000-count);
}

int equal(int *array,int size)
{
	int count=0;
	for(int i=0;i<size;i++)
	{
		if(array[0]==array[i])
		{
			count++;
		}
	}
	if(count==size)
		return 1;
	else
		return 0;
}