/*
    written by Pankaj Kumar.
    country:-INDIA
*/
typedef long long ll;
const ll INF = 1e18;
const ll mod1 = 1e9 + 7;
const ll mod2 = 998244353;
// Add main code here

class Solution
{
public:
    int firstCompleteIndex(vector<int> &arr, vector<vector<int>> &mat)
    {
        int n = mat.size(), m = mat[0].size();

        vector<pair<int, int>> pos(arr.size() + 1);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                pos[mat[i][j]] = {i, j};
            }
        }
        vector<int> row(n, 0), col(m, 0);

        for (int i = 0; i < arr.size(); i++)
        {
            int r = pos[arr[i]].first;
            int c = pos[arr[i]].second;
            row[r]++;
            col[c]++;

            if (row[r] == m || col[c] == n)
            {
                return i;
            }
        }
        return -1;
    }
};
