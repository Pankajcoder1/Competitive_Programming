/*
    written by Pankaj Kumar.
    country:-INDIA
*/
typedef long long ll ;
const ll INF=1e18;
const ll mod1=1e9+7;
const ll mod2=998244353;
//Add main code here

class Solution
{
public:
    int equalPairs(vector<vector<int>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();
        unordered_map<string, int> count;
        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            string row = "";

            for (int j = 0; j < m; j++)
            {
                row += to_string(grid[i][j]) + ",";
            }

            count[row]++;
        }
        for (int i = 0; i < n; i++)
        {
            string col = "";

            for (int j = 0; j < m; j++)
            {
                col += to_string(grid[j][i]) + ",";
            }
            ans+=count[col];
        }

        return ans;
    }
};