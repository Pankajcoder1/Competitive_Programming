/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(V) (V).begin(),(V).end()
const ll maxo=1e7+1;

// partailly accepted
long long solve()
{
    ll n;
    cin>>n;
    if(n==1)
    {
        vector<ll> weight(n),l(n);
        for(auto &x:weight)
            cin>>x;
        for(auto &x:l)
            cin>>x;
        cout<<0<<endl;
        return 0;
    }
    if(n==2)
    {
        vector<ll> weight(n),l(n);
        for(auto &x:weight)
            cin>>x;
        for(auto &x:l)
            cin>>x;
        if(weight[1]>weight[0])
            cout<<0<<endl;
        else
        {
            if(weight[1]==weight[0])
                 cout<<1<<endl;
            else
            {
                if(l[0]==1)
                    cout<<2<<endl;
                else
                    cout<<1<<endl;
            }
        }
        return 0;
    }
    else
    {
        vector<ll> v(n);
        map<ll, ll> l;
        map<ll, vector<ll>> position;
        for(ll i= 0;i < n;i++)
        {
            cin >> v[i];
            position[i].push_back(v[i]);
        }

        for(ll i = 0;i < n;i++)
        {
            ll temp;
            cin >> temp;
            l[v[i]] = temp;
        }

        ll count = 0;
        while(1)
        {
            bool flag = true;
            ll val = 0;
            ll index = -1;
            vector<pair<ll,ll>> store;
            for(auto it : position)
            {
                for(auto itr : it.second)
                {
                    store.push_back({it.first, itr});
                }
            }
            for(ll i = 0;i + 1 < n;i++)
            {
                if(store[i].second > store[i + 1].second)
                {
                    flag = false;
                    val = store[i].second;
                    index = store[i].first;
                    break;
                }
                else
                {
                    if(store[i].first == store[i + 1].first)
                    {
                        flag = false;
                        val = store[i + 1].second;
                        index = store[i + 1].first;
                        break;
                    }
                }
            }
            if(flag)
                break;
            if(find(all(position[index]), val) != position[index].end())
            {
                position[index].erase(find(all(position[index]), val));
            }
            if(position[index].empty())
            {
                position.erase(index);
            }
            position[index + l[val]].push_back(val);
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}

int main()
{
    // #ifndef ONLINEJUDGE
    //    freopen("input.txt","r",stdin);
    //    freopen("output.txt","w",stdout);
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