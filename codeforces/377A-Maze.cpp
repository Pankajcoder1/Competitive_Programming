/*
    written by Pankaj Kumar.
    country:-INDIA
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
/*  -----------------------------------------------------------------------------------*/
// to run ctrl+b
int Count,flag=0,free_cell,k,n,m;

void dfs(vector<vector<char>>& v,int i,int j,vector<vector<bool>>& check)
{
    if(flag)
        return ;
    if(check[i][j]==true||v[i][j]=='#')
        return ;
    else
    {
        check[i][j]=true;
        Count++;
        if(Count==(free_cell-k))
        {
            flag=1;
            return ;
        }
        if(i-1>=0)
            dfs(v,i-1,j,check);
        if(j-1>=0)
            dfs(v,i,j-1,check);
        if((i+1)<n)
            dfs(v,i+1,j,check);
        if((j+1)<m)
            dfs(v,i,j+1,check);
    }
    return ;
}

ll solve()
{
    cin>>n>>m>>k;
    free_cell=0 ;
    vector<vector<char>> v(n,vector<char>(m));
    vector<vector<bool>> check(n,vector<bool>(m));
    ll first=0,second=0;
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        {
            check[i][j]=false;
            cin>>v[i][j];
            if(v[i][j]=='.')
            {
                first=i;
                second=j;
                free_cell++;
            }
            else
            {
                check[i][j]=true;
            }
        }
    }
    Count=0 ;
    dfs(v,first,second,check);
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        {
            if(v[i][j]=='.'&&check[i][j]==false)
                v[i][j]='X';
        }
    }
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        {
            cout<<v[i][j];
        }
        line;
    }
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
    // cin>>TestCase;
    while(TestCase--)
    {
        solve();
    }
}

/* stuff you should look before submission 
*  int overflow
*  special test case (n=0||n=1||n=2)
*  don't get stuck on one approach if you get wrong answer
*/