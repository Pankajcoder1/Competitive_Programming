#include<iostream>
using namespace std;

int main()
{
	int length,no_of_pages;
	cin>>length>>no_of_pages;
	if(length<=23&&(no_of_pages>=500&&no_of_pages<=1000))
		cout<<"Take Medicine";
	else
		cout<<"Don't take Medicine";
}