/*
    written by Pankaj Kumar.
    country:-INDIA
    Institute: National Institute of Technology, Uttarakhand
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
    string shiftingLetters(string s, vector<vector<int>> &shifts)
    {
        int n = s.size();
        vector<int> v(n + 1);
        for (auto x : shifts)
        {
            if (x[2] == 0)
            {
                v[x[0]] -= 1;
                v[x[1] + 1] += 1;
            }
            else
            {
                v[x[0]] += 1;
                v[x[1] + 1] -= 1;
            }
        }
        for (int i = 1; i < n; i++)
        {
            v[i] += v[i - 1];
        }
        for (int i = 0; i < n; i++)
        {
            s[i] = (((s[i] - 'a' + v[i]) % 26) + 26) % 26 + 'a';
        }
        return s;
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