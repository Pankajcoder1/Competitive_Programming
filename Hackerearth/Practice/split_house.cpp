#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,flag=0;
	cin>>n;
	char *ch=new char[n];
	cin>>ch;
	for(int i=0;i<n;i++)
	{
		if(ch[i]=='H'&&ch[i+1]=='H')
		{
			flag=1;
			break;
		}
		else if(ch[i]=='.')
		{
			ch[i]='B';
		}
	}
	if(flag==1)
	{
		cout<<"NO"<<endl;
	}
	else
		cout<<"YES\n"<<ch<<endl;
}