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
    vector<int> productQueries(int n, vector<vector<int>> &queries)
    {
        vector<int> v;
        int value = 1;
        while (n)
        {
            if (n & 1)
                v.push_back(value);
            value *= 2;
            n /= 2;
        }
        vector<int> res;
        for (auto query : queries)
        {
            int ans = 1;
            for (int j = query[0]; j <= query[1]; j++)
                ans = (ans * 1LL * v[j]) % int(1e9 + 7);
            res.push_back(ans);
        }
        return res;
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