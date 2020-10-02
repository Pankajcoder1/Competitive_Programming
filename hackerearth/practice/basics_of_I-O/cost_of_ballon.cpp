#include<iostream>
using namespace std;

int main()
{
	int T,cost_green,cost_purple,n;
	int a,b,cost=0,cost_1;
	cin>>T;
	for(int i=0;i<T;i++)
	{
		cost=0,cost_1=0;
		cin>>cost_green>>cost_purple;
		cin>>n;
		for(int j=0;j<n;j++)
		{
			cin>>a>>b;
			if(a!=0)
			{
				cost_1=cost_1+cost_purple;
				cost=cost+cost_green;
			}
			if(b!=0)
			{
				cost_1=cost_1+cost_green;
				cost=cost+cost_purple;
			}
		}
		cost=min(cost_1,cost);
		cout<<cost<<endl;
	}
}