/*
    written by Pankaj Kumar.
    country:-INDIA
*/
typedef long long ll;

/* ascii value
A=65,Z=90,a=97,z=122
*/

/*  --------------------MAIN PROGRAM----------------------------*/
// to run ctrl+b
const ll INF = 1e18;
const ll mod1 = 1e9 + 7;
const ll mod2 = 998244353;
// Techniques :
// divide into cases, brute force, pattern finding
// sort, greedy, binary search, two pointer
// transform into graph

// Experience :
// Cp is nothing but only observation and mathematics.

// Add main code here

class Solution
{
public:
    string largestPalindromic(string num)
    {
        map<int, int> mp;
        for (auto x : num)
        {
            mp[x - '0']++;
        }
        string res = "";
        int maxo = -1;
        for (char ch = '9'; ch >= '0'; ch--)
        {
            if (mp[ch - '0'] & 1)
            {
                if (maxo == -1)
                {
                    maxo = ch - '0';
                }
            }
            if (ch == '0')
            {
                continue;
            }
            res += string(mp[ch - '0'] / 2, ch);
            mp[ch - '0'] %= 2;
        }
        if (res.size())
        {
            res += string(mp[0] / 2, '0');
            mp[0] %= 2;
            string ans = res;
            reverse(res.begin(), res.end());
            if (maxo != -1)
            {
                ans += (maxo + '0');
            }
            ans += res;
            return ans;
        }
        else
        {
            // res =""
            if (maxo == -1)
            {
                return "0";
            }
            else
            {
                string ans = to_string(maxo);
                return ans;
            }
        }
    }
};

/* -----------------END OF PROGRAM --------------------*/
/*
 * stuff you should look before submission
 * constraint and time limit
 * int overflow
 * special test case (n=0||n=1||n=2)
 * don't get stuck on one approach if you get wrong answer
 */