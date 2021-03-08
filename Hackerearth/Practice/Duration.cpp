#include<iostream>
using namespace std;

int main()
{
	int N;
	int a,b,c,d,result;
	cin>>N;
	for(int i=0;i<N;i++)
	{
		cin>>a>>b>>c>>d;
		result=((c*60)+d)-((a*60)+b);
		if(result>=60)
		{
			cout<<(result/60)<<" "<<(result%60)<<endl;
		}
		else
			cout<<"0 "<<result<<endl;
	}
}