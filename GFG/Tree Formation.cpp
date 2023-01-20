// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    long long minimumCost(int n, vector<int> &p)
    {
        // code here
        long long ans = 0;
        unordered_map<int, int> m;

        m[1] = 0;
        for (int i = 1; i < p.size(); i++)
        {
            m[p[i]]++;
            m[i + 1]++;
            ans += m[p[i]];
        }

        return ans;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; i++)
            cin >> p[i];
        Solution obj;
        long long ans = obj.minimumCost(n, p);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends