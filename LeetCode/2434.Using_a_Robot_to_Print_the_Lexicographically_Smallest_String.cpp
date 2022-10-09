/*
    written by Pankaj Kumar.
    country:-INDIA
*/
typedef long long ll ;


/* ascii value
A=65,Z=90,a=97,z=122
*/

/*  --------------------MAIN PROGRAM----------------------------*/
// to run ctrl+b
const ll INF=1e18;
const ll mod1=1e9+7;
const ll mod2=998244353;
// Techniques :
// divide into cases, brute force, pattern finding
// sort, greedy, binary search, two pointer
// transform into graph

// Experience :
// Cp is nothing but only observation and mathematics.


//Add main code here

class Solution
{
public:
    string robotWithString(string s)
    {
        vector<int> last(26, -1);
        for (int i = 0; i < s.size(); ++i)
            last[s[i] - 'a'] = i;

        string ans;
        stack<char> stk;
        for (int i = 0; i < s.size(); ++i)
        {
            stk.push(s[i]);
            while (stk.size())
            {
                bool exist = false;
                for (int ch = 0; ch < stk.top() - 'a'; ++ch)
                {
                    if (i < last[ch])
                    {
                        exist = true;
                        break;
                    }
                }
                if (exist)
                    break;
                ans.push_back(stk.top());
                stk.pop();
            }
        }
        while (stk.size())
        {
            ans.push_back(stk.top());
            stk.pop();
        }
        return ans;
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