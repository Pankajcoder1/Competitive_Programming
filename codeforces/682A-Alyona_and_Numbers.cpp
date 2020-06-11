/*
	written by Pankaj Kumar.
	country:-INDIA
*/
#include <iostream>
#include<string.h>
using namespace std;

int main()
{
	long long int n,m,count=0;
	cin>>n>>m;
	for(long long int i=1;i<=m;i++)
	{
		count=count+((n+(i%5))/5);
	}
	cout<<count;
}