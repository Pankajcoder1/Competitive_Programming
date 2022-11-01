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
    int destroyTargets(vector<int> &nums, int space)
    {
        map<int, int> cnt;
        int ans = 0;
        for (auto x : nums)
        {
            ++cnt[x % space];
            ans = max(ans, cnt[x % space]);
        }
        int mini = 1e9;
        for (auto x : nums)
        {
            if (cnt[x % space] == ans)
                mini = min(mini, x);
        }
        return mini;
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