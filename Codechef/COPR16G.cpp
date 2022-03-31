/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    int a, b;
    cin >> a >> b;
    if (__gcd(a, b) == 1) cout << (long long)a * b - a - b + 1 << '\n';
    else cout << -1 << '\n';
  }
  return 0;
}
