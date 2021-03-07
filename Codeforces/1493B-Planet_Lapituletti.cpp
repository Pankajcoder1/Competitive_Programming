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

map<char, char> reflections;
void solve() {
    ll h, m;
    cin >> h >> m;

    string query;
    cin >> query;
    ll qh = stoi(query.substr(0, 2));
    ll qm = stoi(query.substr(3, 2));

    string nex = "00:00";
    string ans = "";
    for(int i = h - 1;i >= 0;i--) {
        for(int j = m - 1;j >= 0;j--) {
            string time = i > 9 ? to_string(i) : "0" + to_string(i);
            time += ':';
            time += j > 9 ? to_string(j) : '0' + to_string(j);
            bool flag = true;
            string tmp = time;
            reverse(all(time));
            for(int k = 0;k < sz(time);k++) {
                if(time[k] == ':') continue;
                if(reflections.find(time[k]) != reflections.end()) {
                    time[k] = reflections[time[k]];
                } else {
                    flag = false;
                    break;
                }
            } 

            if(!flag) {
                if(i == qh && j == qm) {
                    ans = nex;
                }
                continue;
            }

            int th = 0;
            th = th * 10 + (time[0] - '0');
            th = th * 10 + (time[1] - '0');

            int tm = 0;
            tm = tm * 10 + (time[3] - '0');
            tm = tm * 10 + (time[4] - '0');

            if(th < h && tm < m) {
                nex = tmp;
            }

            if(i == qh && j == qm) {
                ans = nex;
                break;
            }
        }

        if(ans != "")
            break;
    }

    cout<<ans<<endl;
}

int main() {
    reflections['0'] = '0';
    reflections['1'] = '1';
    reflections['2'] = '5';
    reflections['5'] = '2';
    reflections['8'] = '8';
    speed;
    ll test;
    cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
/* -----------------END OF PROGRAM --------------------*/
/*
* stuff you should look before submission 
* constraint and time limit
* int overflow
* special test case (n=0||n=1||n=2)
* don't get stuck on one approach if you get wrong answer
*/