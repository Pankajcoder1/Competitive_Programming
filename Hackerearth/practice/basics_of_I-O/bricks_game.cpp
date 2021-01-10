#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int N,k,temp;
	cin>>N;
	k=(-3+sqrt(9+24*N))/6;
	temp=N-((k*(k+1))*3)/2;
	if(temp==0||temp>k+1)
	{
		cout<<"Motu"<<endl;
	}
	else
		cout<<"Patlu"<<endl;
}