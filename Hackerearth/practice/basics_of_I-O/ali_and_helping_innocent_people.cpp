#include<iostream>
using namespace std;

int main()
{
	char ch[9];
	int first,second,third,forth;
	for(int i=0;i<9;i++)
	{
		cin>>ch[i];
	}
	if(ch[2]=='A'||ch[2]=='E'||ch[2]=='I'||ch[2]=='O'||ch[2]=='U'||ch[2]=='Y')
	{
		cout<<"invalid";
	}
	else
	{
		first=int(ch[0])-int(ch[1]);
		second=int(ch[3])-int(ch[4]);
		third=int(ch[4])-int(ch[5]);
		forth=int(ch[7])-int(ch[8]);
		if(first%2==0&&second%2==0&&third%2==0&&forth%2==0)
		{
			cout<<"valid";
		}
		else
		{
			cout<<"invalid";
		}
	}
}