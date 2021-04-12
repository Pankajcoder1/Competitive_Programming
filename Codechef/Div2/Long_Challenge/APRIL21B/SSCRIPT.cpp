/*
    written by Pankaj Kumar.
    country:-INDIA
    Institute: National Institute of Technology, Uttarakhand
*/
#include<bits/stdc++.h>
using namespace std;

long long solve()
{
	int n,k;
	cin>>n>>k;
    string s;
    cin>>s;
    int count=0;
    for(int i=0;i<n;i++){
    	if(s[i]=='*')
    		count++;
    	else
    		count=0;
    	if(count>=k){
    		cout<<"YES"<<endl;
    		return 0;
    	}
    }
    cout<<"NO"<<endl;
    return 0;
}

int main()
{
    // #ifndef ONLINEJUDGE
    //    freopen("input.txt","r",stdin);
    //    freopen("output.txt","w",stdout);
    // #endif
    long long test=1;
    scanf("%lld",&test);
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