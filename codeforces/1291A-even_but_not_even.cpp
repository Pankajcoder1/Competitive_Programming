#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str;
	int t,len,count,n;
	cin>>t;
	for(int j=0;j<t;j++)
	{
		cin>>n;
		str.resize(n);
		cin>>str;
		len=str.length();
		string cop;
		count=0;
		for(int i=0;i<len;i++)
		{
			if(str[i]!='0'&&str[i]!='2'&&str[i]!='4'&&str[i]!='6'&&str[i]!='8')
			{
				cop.push_back(str[i]);
				count++;
			}
			if(count==2)
			{
				break;
			}
		}
		if(cop.length()==0)
		{
			cout<<-1<<endl;
		}
		else
		{
			cout<<cop<<endl;
		}
	}
}