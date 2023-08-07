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
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int n = matrix.size(), m = matrix[0].size();
        int start = 0, end = (n * m) - 1;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            int midElem = matrix[mid / m][mid % m];
            if (midElem == target)
            {
                return true;
            }
            else if (target < midElem)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        return false;
    }
};