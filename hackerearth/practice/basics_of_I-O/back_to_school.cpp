#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int ar[3];
	int *l;
	for(int i=0;i<3;i++)
	{
		cin>>ar[i];
	}
	l=max_element(ar,ar+3);
	cout<<*l;
}