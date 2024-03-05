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
    int minimumLength(string s)
    {
        int left = 0, right = s.size() - 1;

        while ((left < right) and s[left] == s[right])
        {
            char ch = s[left];
            while ((left <= right) and s[left] == ch)
            {
                left += 1;
            }
            while ((right >= left) and s[right] == ch)
            {
                right -= 1;
            }
        }
        return right - left + 1;
    }
};
