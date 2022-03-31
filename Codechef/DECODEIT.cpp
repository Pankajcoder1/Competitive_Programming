/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include<bits/stdc++.h>
using namespace std;
char number(string s)
{
	if(s=="0000")
		return 'a';
	else if(s=="0001")
		return 'b';
	else if(s=="0010")
		return 'c';
	else if(s=="0011")
		return 'd';
	else if(s=="0100")
		return 'e';
	else if(s=="0101")
		return 'f';
	else if(s=="0110")
		return 'g';
	else if(s=="0111")
		return 'h';
	else if(s=="1000")
		return 'i';
	else if(s=="1001")
		return 'j';
	else if(s=="1010")
		return 'k';
	else if(s=="1011")
		return 'l';
	else if(s=="1100")
		return 'm';
	else if(s=="1101")
		return 'n';
	else if(s=="1110")
		return 'o';
	else
		return 'p';
}

long long solve()
{
    long long n;
    cin>>n;
    if(n==0)
    	return 0;
    string s;
    cin>>s;
    for(long long i=0;i<n;i+=4)
    {
    	string ans="";
    	ans=s[i];
    	ans+=s[i+1];
    	ans+=s[i+2];
    	ans+=s[i+3];
    	// cout<<"ans is "<<ans<<endl;
    	cout<<number(ans);
    }
    cout<<endl;
    return 0;
}

int main()
{
    // #ifndef ONLINEJUDGE
    //     freopen("input.txt","r",stdin);
    //     freopen("output.txt","w",stdout);
    // #endif
    long long test;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
/* stuff you should look before submission 
* int overflow
* special test case (n=0||n=1||n=2)
* don't get stuck on one approach if you get wrong answer
*/