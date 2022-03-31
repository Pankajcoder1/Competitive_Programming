/*
    written by Pankaj Kumar.
    country:-INDIA
    Institute: National Institute of Technology, Uttarakhand
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


long long solve()
{
    string s;
    cin>>s;
    ll n=s.size();
    ll flag0=0,flag1=0;
    for(auto x:s){
        if(x=='1')
            flag1++;
        else
            flag0++;
    }
    if(flag0==0){
        // cout<<"ans is "<<"0"<<endl;
        cout<<0<<endl;
        return 0;
    }
    if(flag1==0){
        // cout<<"ans is 1"<<endl;
        cout<<1<<endl;
        return 0;
    }
    
    vector<vector<ll>> right(n,vector<ll>(2,0));
    vector<ll> dp1(n+1,0), dp2(n+1,0);
    string ans = "1";
    ll pos0 = n, pos1 = n;

    for(ll i = n - 1;i >= 0;i--){
        if(s[i] == '1')
            pos1 = i;
        else
            pos0 = i;
        right[i][0] = pos0;
        right[i][1] = pos1;
    }

    
    for(ll i = n - 1;i >= 0;i--){
        dp1[i] = dp1[i + 1];
        if(s[i] == '0' && right[i][1] < n){
            dp1[i]=max(dp1[i], dp1[right[i][1] + 1] + 1);
        }

        if(s[i] == '1' && right[i][0] < n) {
            dp1[i]=max(dp1[i], dp1[right[i][0] + 1] + 1);
        }

        dp2[i] = dp2[i + 1];
        if(right[i][1] < n) {
            dp2[i]=max(dp2[i], dp1[right[i][1] + 1] + 1);
        }
    }

    ll size = dp2[0] + 1;
    ll temp = right[0][1] + 1;
    
    for(ll i = 1;i < size;i++){
        if(temp >= n) {
            ans += '0';
            continue;
        }

        if(right[temp][0] >= n){
            ans += '0';
            continue;
        }

        if(dp1[right[temp][0] + 1] < size - i - 1){
            ans += '0';
            temp = right[temp][0] + 1;
        }
        else{
            ans += '1';
            temp = right[temp][1] + 1;
        }
    }    

    // cout<<"ans is "<<ans<<endl;
    dp1.clear();
    dp2.clear();
    right.clear();
    cout<<ans<<endl;
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