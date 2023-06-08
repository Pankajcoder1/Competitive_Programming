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
    int countNegatives(vector<vector<int>> &grid)
    {
        int cnt = 0;
        int n = grid.size();
        int m = grid[0].size();
        int column = n - 1, row = 0;
        while (row < m && column >= 0)
        {
            if (grid[column][row] < 0)
            {
                cnt += (m - row);
                column--;
            }
            else
                row++;
        }
        return cnt;
    }
};