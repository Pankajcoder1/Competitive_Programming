/*
    written by Pankaj Kumar.
    country:-INDIA
    Institute: National Institute of Technology, Uttarakhand
*/
#include<bits/stdc++.h>
using namespace std;

long long solve()
{
    double k1,k2,k3,v;
    cin>>k1>>k2>>k3>>v;
    cout<<setprecision(10)<<fixed;
    cout.precision(2);
    v=v*k1*k2*k3;
    double req_time=100.0/v;
    // cout<<"req_time is "<<req_time<<endl;
    if(req_time>=double(9.575))
    	cout<<"NO"<<endl;
    else
    	cout<<"YES"<<endl;
    return 0;
}

int main()
{
    // #ifndef ONLINEJUDGE
    //    freopen("input.txt","r",stdin);
    //    freopen("output.txt","w",stdout);
    // #endif
    long long test=1;
    cin>>test;
    // scanf("%lld",&test);
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