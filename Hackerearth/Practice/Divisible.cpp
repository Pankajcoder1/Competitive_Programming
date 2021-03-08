#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

int main()
{
	long int N,number,temp=0,odd=0,even=0;
	string s;
	cin>>N;
	for(long int i=1;i<=N;i++)
	{
		//first digit
		if(i<=N/2)
		{
			cin>>s;
			temp=(int(s[0])-48);
			if(i%2==0)
			{
				even=even+temp;
			}
			else
			{
				odd=odd+temp;
			}
		}
		// last digit
		else
		{
			cin>>number;
			temp=number%10;
			if(i%2==0)
			{
				even=even+temp;
			}
			else
			{
				odd=odd+temp;
			}
		}
	}
	if((even-odd)%11==0)
	{
		cout<<"OUI"<<endl;
	}
	else
	{
		cout<<"NON"<<endl;
	}
}