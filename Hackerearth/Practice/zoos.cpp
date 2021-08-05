#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	int len=0,c_z=0,c_o=0;
	string str;
	cin>>str;
	len = str.length();
	for(int i=0;i<len;i++)
	{
		if(str[i]=='z')
			c_z++;
		else
			c_o++;
	}
	if(c_o==2*c_z)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
}