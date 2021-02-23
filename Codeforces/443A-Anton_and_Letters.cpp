/*
	written by Pankaj Kumar.
	country:-INDIA
*/
#include <iostream>
#include<string.h>
using namespace std;

int main()
{
	char ch;
	int d,count=0;
	int *arr=new int[26];
	fill_n(arr,26,0);
	cin>>ch;
	while(ch!='}')
	{
		if(int(ch)>=97 && int(char(ch))<=122)
		{
			d=int(char(ch))-97;
			arr[d]=arr[d]+1;
		}
		cin>>ch;
	}
	for(int i=0;i<26;i++)
	{
		if(arr[i]!=0)
		{
			count++;
		}
	}
	cout<<count;
}