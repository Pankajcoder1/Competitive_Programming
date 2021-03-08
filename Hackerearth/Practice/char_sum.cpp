#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(false);
	cout.tie(false);
	string s;
	int len=0,sum=0;
	cin>>s;
	len=s.length();
	for(int i=0;i<len;i++)
	{
		sum=sum+(int(s[i])-96);
	}
	cout<<sum;
}