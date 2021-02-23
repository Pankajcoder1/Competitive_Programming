/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef vector<ll> vl;
typedef vector<bool> vb;
typedef vector<char> vc;
typedef map<ll,ll> ml;
typedef set<char>sc;
typedef set<ll> sl;
#define pan cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
// define values.
// #define mod 1000000007
#define phi 1.618
/* Bit-Stuff */
#define get_set_bits(a) (__builtin_popcount(a))
#define get_set_bitsll(a) ( __builtin_popcountll(a))
#define get_trail_zero(a) (__builtin_ctz(a))
#define get_lead_zero(a) (__builtin_clz(a))
#define get_parity(a) (__builtin_parity(a))
/*  Abbrevations  */
#define ff first
#define ss second
#define mp make_pair
#define line cout<<endl;
#define pb push_back
#define Endl "\n"
// loops
#define forin(arr,n) for(ll i=0;i<n;i++) cin>>arr[i];
// Some prll
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
#define cc ll test;cin>>test;while(test--)
// sort
#define all(V) (V).begin(),(V).end()
#define srt(V) sort(all(V))
#define srtGreat(V) sort(all(V),greater<ll>())
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
/* ascii value 
A=65,Z=90,a=97,z=122
*/
/*  -----------------------------------------------------------------------------------*/
const ll MOD = 1e9 + 7;
const ll N = 1e5 + 5;
ll a[N], ans_array[N];
ll ans;



ll solve()
{
    ll n;
    cin>>n;
    ll one_pos = 0;
    for(ll i = 1;i <= n;i++)
    {
        cin>>a[i];
        if(a[i] == 1)
        {
            one_pos = i;
        }
    }

    ans_array[0] = 0LL; 
    if(one_pos == 0 || one_pos == n)
    {
        for(ll i = 1;i <= n;i++)
        {
            ans_array[i] = ans_array[i - 1];
            if(i == n)
            {
                ans_array[i] += (a[i] & 1) ? a[i] : (a[i] - 1);
            }
            else
            {
                ans_array[i] += (a[i] & 1) ? (a[i] - 1) : a[i];
            }
        }
    }
    else if(one_pos == 1)
    {
        ans_array[1] = 1;
        for(ll i = 2;i <= n;i++)
        {
            ans_array[i] = ans_array[i - 1];
        }
    }
    else
    {
        for(ll i = 1;i <= n;i++)
        {
            ans_array[i] = ans_array[i - 1];
            if(i == n)
            {
                ans_array[i] += (a[i] & 1) ? a[i] : (a[i] - 1);
            }
            else
            {
                if(a[i] != 1)
                {
                    if(i + 1 == one_pos)
                    {
                        ans_array[i] += (a[i] & 1) ? a[i] : (a[i] - 1);
                    }
                    else
                    {
                        ans_array[i] += (a[i] & 1) ? (a[i] - 1) : a[i];
                    }
                }
            }
        }
    }
    ll q;
    cin>>q;
    // scanf("%lld", &q);
    while(q--)
    {
        ll r;
        cin>>r;
        // scanf("%lld", &r);
        r %= MOD;
        ans = ((r / n) * (ans_array[n] % MOD)) % MOD;
        if(r % n)
        {
            if(one_pos == 0)
            {
                if(a[r % n] & 1)
                {
                    ans = (ans + ans_array[r % n] + 1) % MOD;
                }
                else
                {
                    ans = (ans + ans_array[r % n]) % MOD;
                }
            }
            else if(one_pos == 1)
            {
                if(r == 1)
                {
                    ans = 1;
                }

                if((r % n) > 1)
                {
                    ans = (ans + 1) % MOD;
                }
            }
            else if(one_pos == n)
            {
                if(a[r % n] & 1)
                {
                    ans = (ans + ans_array[r % n] + 1) % MOD;
                }
                else
                {
                    ans = (ans + ans_array[r % n]) % MOD;
                }
            }
            else
            {
                if((r % n) == one_pos)
                {
                    if(a[(r % n) - 1] % 2 == 0)
                    {
                        ans = (ans + ans_array[r % n] + 2) % MOD;
                    }
                    else
                    {
                        ans = (ans + ans_array[r % n]) % MOD;
                    }
                }
                else if((r % n) + 1 == one_pos)
                {
                    if(a[r % n] % 2 == 0)
                    {
                        ans = (ans + ans_array[r % n] + 1) % MOD;
                    }
                    else
                    {
                        ans = (ans + ans_array[r % n]) % MOD;
                    }
                }
                else
                {
                    if(a[r % n] & 1)
                    {
                        ans = (ans + ans_array[r % n] + 1) % MOD;
                    }
                    else
                    {
                        ans = (ans + ans_array[r % n]) % MOD;
                    }
                }
            }
        }
        else
        {
            if(one_pos!=1)
            {
                if(a[n] % 2 == 0)
                {
                    ans = (ans + 1) % MOD;
                }
            }
        }

        printf("%lld\n", ans);
    }
    return 0;
}

int main()
{
    //freopen("input.txt"a, "r", stdin);
    pan;
    // solve();
    cc
    {
        solve();
    }
    return 0;
}

/* stuff you should look before submission 
* ll overflow
* special test case (n=0||n=1||n=2)
* don't get stuck on one approach if you get wrong answer
*/