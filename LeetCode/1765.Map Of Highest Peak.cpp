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
    int x[4] = {1, -1, 0, 0};
    int y[4] = {0, 0, -1, 1};
    vector<vector<int>> highestPeak(vector<vector<int>> &isWater)
    {
        int n = isWater.size();
        int m = isWater[0].size();
        vector<vector<int>> ans(n, vector<int>(m, -1));
        queue<pair<int, int>> q;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (isWater[i][j] == 1)
                {
                    ans[i][j] = 0;
                    q.push({i, j});
                }
            }
        }

        while (!q.empty())
        {
            auto top = q.front();
            q.pop();

            for (int i = 0; i < 4; i++)
            {
                int newI = top.first + y[i];
                int newJ = top.second + x[i];

                if (newI >= 0 && newI < n && newJ >= 0 && newJ < m &&
                    ans[newI][newJ] == -1)
                {
                    ans[newI][newJ] = ans[top.first][top.second] + 1;
                    q.push({newI, newJ});
                }
            }
        }
        return ans;
    }
};
