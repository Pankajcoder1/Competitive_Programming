/*
	written by Pankaj Kumar.
	country:-INDIA
*/
#include <iostream>
using namespace std;

int gcd(int x, int y)
{
	if(y==0)
		return x;
	else
		return gcd(y,x%y);
}

int main()
{
	//freopen("input.txt"a, "r", stdin);
	long long n;
	cin>>n;
	while(n--)
	{
		long long a;
		string b;
		cin>>a>>b;
		if(a==0)
			cout<<b<<endl;
		else
		{
			long long num=0;
			for(long long i=0;i<b.length();i++)
			{
				num=(num*10+(int(b[i]-'0')))%a;
			}
			cout<<gcd(a,num)<<endl;
		}
	}
}
