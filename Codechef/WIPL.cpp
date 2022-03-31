/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include<bits/stdc++.h>
using namespace std;
// tc
/* 1
4 14
4 9 9 10
ans is 4*/
long long pankaj=0,flag=0;
set<pair<long long,long long>> func(set<pair<long long,long long>> st,long long element,long long k)
{
    set<pair<long long,long long>> ans;
    pankaj++;
    for(auto x:st)
    {
        // cout<<"x is "<<x.first<<" "<<x.second<<" and element is "<<element<<endl;
        long long a=x.first;
        long long b=x.second;
        if(a<k)
            ans.insert({a+element,b});
        if(b+element>a)
            ans.insert({b+element,a});
        else
            ans.insert({a,b+element});
        if(b+element>=k&&a>=k)
        {
            // cout<<"a "<<a<<" "<<b<<" "<<element<<endl;
            flag=1;
            return ans;
        }
    }
    return ans;
}

long long solve()
{
    long long n,k;
    cin>>n>>k;
    pankaj=0;
    flag=0;
    vector<long long> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    set<pair<long long,long long>> s;
    sort(v.begin(),v.end(),greater<long long>());
    s.insert({0,0});
    for(int i=0;i<n;i++)
    {
        s=func(s,v[i],k);
        // cout<<"in set element "<<i<<endl;
        // for(auto x:s)
        // {
        //     cout<<x.first<<" "<<x.second<<endl;
        // }
        if(flag==1)
        {
            cout<<pankaj<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
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