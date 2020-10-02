#include<iostream>
using namespace std;

int main()
{
	int no,i=0,result=0,temp;
	cin>>no;
	int *array=new int[10];
	while(no!=0)
	{
		temp=no%10;
		array[i]=temp;
		i++;
		no=no/10;
	}
	i=1;
	for(int j=9;j>=0;j--)
	{
		result=result+i*array[j];
		i++;
	}
	if(result%11==0)
	{
		cout<<"Legal ISBN";
	}
	else
		 cout<<"Illegal ISBN";
}