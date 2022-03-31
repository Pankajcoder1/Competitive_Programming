/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include<bits/stdc++.h>
using namespace std;
// partially accepted
int solve()
{
    int n,m;
    cin>>n>>m;
    vector<int> a(n),b(m);
    vector<int> ans;
    map<int,int> M;
    ans.push_back(0);
    M[0]++;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    
    for(int i=0;i<ans.size();i++)
    {
        int x=ans[i];
        // cout<<"x is "<<x<<endl;
        for(int j=0;j<n;j++)
        {
            int temp=x|a[j];
            // cout<<"in or "<<temp<<endl;
            if(M[temp]==0)
            {
                // cout<<"hi1 "<<endl;
                M[temp]++;
                ans.push_back(temp);
            }
        }
        for(int j=0;j<m;j++)
        {
            int temp=x&b[j];
            // cout<<"in and "<<temp<<endl;
            if(M[temp]==0)
            {
                // cout<<"hi "<<endl;
                M[temp]++;
                ans.push_back(temp);
            }
        }
    }
    // cout<<"\tnow final set is "<<endl;
    // for(auto x:ans)
    //     cout<<"\tin set "<<x<<endl;
    cout<<ans.size()-1<<endl;
    return 0;
}

int main()
{
    // #ifndef ONLINEJUDGE
    //     freopen("input.txt","r",stdin);
    //     freopen("output.txt","w",stdout);
    // #endif
    cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
    int test;
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