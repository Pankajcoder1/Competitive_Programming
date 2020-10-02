/*
	written by Pankaj Kumar.
	country:-INDIA
*/
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int i;
	if(int(s[0])>=97 && int(s[0])<=122)
	{
		i=int(s[0]);
		s[0]=char(i-32);
	}
	cout<<s;
}