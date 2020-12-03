/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
/*----typedefs--------*/
typedef long long ll;typedef pair<int, int> pi;typedef pair<long long, long long> pl;
typedef vector<int> vi;typedef vector<pair<int, int>> vpi;typedef vector<long long> vl;typedef vector<vector<int>> vvi;
typedef map<int, int> mi;typedef map<long long, long long> ml;typedef map<int, vector<int>> mivi;
typedef set<int> si;typedef set<long long> sl;typedef set<pair<int, int>> spi;
typedef queue<int> qi;typedef queue<pair<int, int>> qpi;
/*-----in and out--------*/
#define pf(a) cout << a << endl
#define forIn(arr, num) for(int i = 0; i < num; i++) cin >> arr[i];
#define vpnt(ans) for(int i = 0; i < int(ans.size()); i++) cout << ans[i] << (i + 1 < int(ans.size()) ? ' ' : '\n');
/*---useful defines------*/
#define sz(x) (int)(x).size()
#define pb push_back
#define mem(a, b) memset(a,(b), sizeof(a))
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
/*--- bit-stuff ----*/
#define GET_SET_BITS(a) (__builtin_popcount(a))
#define GET_SET_BITSLL(a) ( __builtin_popcountll(a))
#define GET_TRAIL_ZERO(a) (__builtin_ctz(a))
#define GET_LEAD_ZERO(a) (__builtin_clz(a))
#define GET_PARITY(a) (__builtin_parity(a))
/*----- the binary answer of life-----*/
#define no cout << "NO" << endl
#define yes cout << "YES" << endl
/*---checking and pushing-----*/
template<class T> bool ckmin(T& a, const T& b) { return b < a ? a = b, 1 : 0; }
template<class T> bool ckmax(T& a, const T& b) { return a < b ? a = b, 1 : 0; }
/*---- FAST I/O and file read ---*/
void go() {
    ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
#endif
}
/*-------- movement in a 2D array ------*/
const int d4i[4]={-1, 0, 1, 0}, d4j[4]={0, 1, 0, -1};
const int d8i[8]={-1, -1, 0, 1, 1, 1, 0, -1}, d8j[8]={0, 1, 1, 1, 0, -1, -1, -1};
/*----------------------------------------------------------------*/
const int MOD = 1e9 + 7;
const int N = 2e5 + 5;
/*-------------- Push your limits here ---------------------------*/
void solve() {
    vvi arr(3, vi(3));
    for(int i = 0;i < 3;i++) {
        for(int j = 0;j < 3;j++) {
            cin >> arr[i][j];
        }
    }

    vector<vector<char>> v(3, vector<char>(3, '1'));
    for(int i = 0;i < 3;i++) {
        for(int j = 0;j < 3;j++) {
            if(arr[i][j] & 1) {
                if(v[i][j] == '1') v[i][j] = '0';
                else v[i][j] = '1';

                if(i + 1 < 3) {
                    if(v[i + 1][j] == '1') v[i + 1][j] = '0';
                    else v[i + 1][j] = '1';
                }

                if(i - 1 >= 0) {
                    if(v[i - 1][j] == '1') v[i - 1][j] = '0';
                    else v[i - 1][j] = '1';
                }

                if(j + 1 < 3) {
                    if(v[i][j + 1] == '1') v[i][j + 1] = '0';
                    else v[i][j + 1] = '1';
                }

                if(j - 1 >= 0) {
                    if(v[i][j - 1] == '1') v[i][j - 1] = '0';
                    else v[i][j - 1] = '1';
                }
            }
        }
    }

    for(int i = 0;i < 3;i++) {
        for(int j = 0;j < 3;j++) {
            cout << v[i][j];
        }
        cout << endl;
    }
}

int main() {
    solve();
    return 0;
}

/* stuff you should look before submission 
* int overflow
* special test case (n=0||n=1||n=2)
* don't get stuck on one approach if you get wrong answer
*/