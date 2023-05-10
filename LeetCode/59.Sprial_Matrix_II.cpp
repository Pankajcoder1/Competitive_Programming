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
    vector<vector<int>> generateMatrix(int n)
    {
        vector<vector<int>> res(n, vector<int>(n));
        int top = 0, bottom = n - 1, left = 0, right = n - 1;
        int val = 1;

        while (top <= bottom && left <= right)
        {
            // Traverse top row
            for (int i = left; i <= right; i++)
            {
                res[top][i] = val++;
            }
            top++;

            // Traverse right column
            for (int i = top; i <= bottom; i++)
            {
                res[i][right] = val++;
            }
            right--;

            // Traverse bottom row
            if (top <= bottom)
            {
                for (int i = right; i >= left; i--)
                {
                    res[bottom][i] = val++;
                }
                bottom--;
            }

            // Traverse left column
            if (left <= right)
            {
                for (int i = bottom; i >= top; i--)
                {
                    res[i][left] = val++;
                }
                left++;
            }
        }

        return res;
    }
};
