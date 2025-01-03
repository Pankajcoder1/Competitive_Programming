/*
    written by Pankaj Kumar.
    country:-INDIA
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int solve()
{
    int n,left=0;
    cin >> n;
    map<int, int> m;
    // don't use unordered_map because in wrose case it will take O(n) in find operation
    int maxo = 0;

    for (int right = 0; right < n; right++)
    {
        int temp;
        cin >> temp;
        if (m.find(temp)!=m.end() && m[temp]>=left)
        // take O(log(n)) to find element
        {
            // already selected in current range
            left = m[temp] + 1;
        }
        // not in current chunk
        m[temp] = right;
        maxo = max(maxo, right-left+1);
    }

    cout << maxo << endl;
    return 0;
}
int main()
{
    int testCase = 1;
    // cin>>testCase;
    while (testCase--)
    {
        solve();
    }
    return 0;
}