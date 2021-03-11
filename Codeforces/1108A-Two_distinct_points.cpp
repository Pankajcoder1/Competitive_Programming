/*
    written by Pankaj Kumar.
    country:-INDIA
    Institute: National Institute of Technology, Uttarakhand
*/
#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<string.h>
#define pan cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
#define mod 1000000007;
using namespace std;
typedef long long ll ;
#define line cout<<endl;

int main()
{
	pan;
	ll t;
	cin>>t;
	while(t--)
	{
		ll l1,r1,l2,r2;
		cin>>l1>>r1>>l2>>r2;
		if(l2!=l1)
			cout<<l1<<" "<<l2<<endl;
		else
			cout<<l1<<" "<<l2+1<<endl;
	}
}

// * -----------------END OF PROGRAM --------------------*/
/*
* stuff you should look before submission 
* constraint and time limit
* int overflow
* special test case (n=0||n=1||n=2)
* don't get stuck on one approach if you get wrong answer
*/