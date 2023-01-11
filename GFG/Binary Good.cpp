// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int solve(string str, int n)
    {
        // add your code here
        int count = 0;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == '1')
            {
                count++;
            }
            else
            {
                if (count)
                {
                    v.push_back(count);
                }
                count = 0;
            }
        }
        if (count > 0)
        {
            v.push_back(count);
        }
        if (v.size() == 0)
        {
            return 0;
        }
        sort(v.begin(), v.end());
        int move = INT_MAX;
        for (int i = 1; i <= v[v.size() - 1]; i++)
        {
            int tempMove = 0;
            for (auto x : v)
            {
                tempMove += abs(x - i);
            }
            move = min(move, tempMove);
        }
        return move;
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
        string s;
        cin >> s;

        Solution ob;
        long long ans = ob.solve(s, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends