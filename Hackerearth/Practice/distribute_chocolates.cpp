#include<iostream>
using namespace std;

int main()
{
	int T;
	// yanh pe agar ans and k ko else ke andar declare karo
	// ya int declare kiye to wrong dega.
	long int c,n,ans,k;
	cin>>T;
	for(int i=0;i<T;i++)
	{
		cin>>c>>n;
		if(c<(n*(n+1))/2)
		{
			cout<<c<<endl;
		}
		else
		{
			k=(c-(n*(n-1))/2)/n;
			ans =c-n*k-(n*(n-1))/2;
			cout<<ans<<endl;
		}
	}
}