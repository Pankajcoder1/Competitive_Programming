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
    vector<string> ans;
    void solve(int open_bracket, int close_bracket, string str)
    {
        if (open_bracket == 0 && close_bracket == 0)
        {
            ans.push_back(str);
            return;
        }
        if (open_bracket - 1 >= 0 && close_bracket >= open_bracket)
        {
            solve(open_bracket - 1, close_bracket, str + '(');
        }
        if (close_bracket - 1 >= 0 && close_bracket >= open_bracket)
        {
            solve(open_bracket, close_bracket - 1, str + ')');
        }
        return;
    }

    vector<string> generateParenthesis(int n)
    {
        int open_bracket = n, close_bracket = n;
        string str = "";
        solve(open_bracket, close_bracket, str);
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