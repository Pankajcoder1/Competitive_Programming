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
    bool isValid(int i, int j, int n, int m)
    {
        return !(i < 0 || j < 0 || i >= n || j >= m);
    }
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int r, int c)
    {
        vector<vector<int>> ans{{r, c}};
        int size = rows * cols, len = 1;
        int x = r, y = c;
        
        while (ans.size() < size)
        {
            for (int j = 1; j <= len; j++)
            {
                if (isValid(x, y + j, rows, cols))
                    ans.push_back({x, y + j});
            }

            y += len; //  going right;

            for (int j = 1; j <= len; j++)
            {
                if (isValid(x + j, y, rows, cols))
                    ans.push_back({x + j, y});
            }

            x += len; // going down;
            len++;    // increasing length after down in over;

            for (int j = 1; j <= len; j++)
            {
                if (isValid(x, y - j, rows, cols))
                    ans.push_back({x, y - j});
            }

            y -= len; // going left;

            for (int j = 1; j <= len; j++)
            {
                if (isValid(x - j, y, rows, cols))
                    ans.push_back({x - j, y});
            }

            x -= len; // going up;
            len++;
        }

        return ans;
    }
};