#include<iostream>
using namespace std;

int main()
{
	long int D,oc,of,od,cs,cb,cm,cd;
	long int online,classic;
	cin>>D;
	cin>>oc>>of>>od;
	cin>>cs>>cb>>cm>>cd;
	online = oc + (D-of)*od;
	classic = cb+(D/cs)*cm+D*cd;
	if(classic<online)
	{
		cout<<"Classic Taxi"<<endl;
	}
	else if(classic>=online)
		cout<<"Online Taxi"<<endl;
}