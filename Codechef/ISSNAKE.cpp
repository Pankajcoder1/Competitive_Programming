/*
    written by Pankaj Kumar.
    country:-INDIA
    Institute: National Institute of Technology, Uttarakhand
*/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef long long ll ;
typedef vector<ll> vl;
#define speed cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
/*  Abbrevations  */
#define ff first
#define ss second
#define mp make_pair
#define line cout<<endl;
#define pb push_back
#define Endl "\n"
// loops
#define forin(arr,n) for(ll i=0;i<n;i++) cin>>arr[i];
// Some print
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
// sort
#define all(V) (V).begin(),(V).end()
#define srt(V) sort(all(V))
#define srtGreat(V) sort(all(V),greater<ll>())
// some extra
#define printv(v) for(ll i=0;i<ll(v.size());i++){cout<<v[i]<<" ";} line;
#define precision(x) cout<<fixed<<setprecision(x);
#define sz(V) ll(V.size())
// template
template <typename T>
T mymax(T x,T y)
{
    return (x>y)?x:y;
}
// function
ll power(ll x,ll y,ll mod)
{
    ll res=1;
    // x=x%mod;
    while(y>0)
    {
        if(y%2==1)
        {
            res*=x;
            // res=res%mod;
        }
        y/=2; x*=x; // x=x%mod;
    }
    return res;
}
ll str_to_num(string s)
{
    return stoi(s);
}

string num_to_str(ll num)
{
    return to_string(num);
}
// datatype definination
#define ordered_set tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>
class Point
{
    public:
        ll x;
        ll y;
        ll z;
        ll getsum()
        {
            return x+y+z;
        }
};
/* ascii value 
A=65,Z=90,a=97,z=122
*/
/*  --------------------MAIN PROGRAM----------------------------*/
// to run ctrl+b

ll solve()
{
    ll n,i,j;
        cin>>n;
        vector<vector<char>> a(2,vector<char>(n));
        pair<ll,ll> fi;
        ll flag=0;
        for(i=0;i<2;i++)
        {
            for(j=0;j<n;j++)
            {   char c;
                cin>>c;
                if(flag==0 && c=='#')
                {
                    fi.first=i;fi.second=j;
                    flag=1;
                }
                a[i][j]=c;
            }
        }
        flag=0;
        queue<pair<ll,ll>> q;
        for(i=0;i<n;i++)
        {
            if(a[0][i]!='#')
            {
                if(a[1][i]=='#')
                {
                    q.push({1,i});
                    a[1][i]='0';
                    fi.first=1;fi.second=i;
                    flag=1;
                }
            }
            if(flag==1) break;
            if(a[1][i]!='#')
            {
                if(a[0][i]=='#')
                {
                    q.push({0,i});
                    a[0][i]='.';
                    fi.first=0;fi.second=i;
                    flag=1;
                }
            }
            if(flag==1) break;
        }
        if(flag==0)
        {
            q.push({fi.first,fi.second});
            a[fi.first][fi.second]='.';
        }
        while(!q.empty())
        {
            ll x=q.front().first;
            ll y=q.front().second;
            q.pop();
            if(x==0)
            {
                if(a[x+1][y]=='#')
                {
                    a[x+1][y]='.';
                    q.push({x+1,y});
                    continue;
                }
            }
            if(x==1)
            {
                if(a[x-1][y]=='#')
                {
                    a[x-1][y]='.';
                    q.push({x-1,y});
                    continue;
                }
            }
            if(y<(n-1))
            {
                if(a[x][y+1]=='#')
                {
                    a[x][y+1]='.';
                    q.push({x,y+1});
                    continue;
                }
            }
        }
        if(flag==1)
        {
            q.push({fi.first,fi.second});
            while(!q.empty())
            {
            ll x=q.front().first;
            ll y=q.front().second;
            q.pop();
            if(x==0)
            {
                if(a[x+1][y]=='#')
                {
                    a[x+1][y]='.';
                    q.push({x+1,y});
                    continue;
                }
            }
            if(x==1)
            {
                if(a[x-1][y]=='#')
                {
                    a[x-1][y]='.';
                    q.push({x-1,y});
                    continue;
                }
            }
            if(y>0)
            {
                if(a[x][y-1]=='#')
                {
                    a[x][y-1]='.';
                    q.push({x,y-1});
                    continue;
                }
            }
            }
        }
        flag=1;
        for(i=0;i<2;i++)
        {
            for(j=0;j<n;j++)
            {
                if(a[i][j]=='#')
                {
                    flag=0;
                    break;
                }
            }
            if(flag==0)
            break;
        }
        if(flag==1)
        cout<<"yes\n";
        else
        cout<<"no\n";
    return 0;
}

int main()
{
    speed;
    /* #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif */
    ll TestCase=1;
    cin>>TestCase;
    while(TestCase--)
    {
        solve();
    }
}
/* -----------------END OF PROGRAM --------------------*/
/*
* stuff you should look before submission 
* constraint and time limit
* int overflow
* special test case (n=0||n=1||n=2)
* don't get stuck on one approach if you get wrong answer
*/