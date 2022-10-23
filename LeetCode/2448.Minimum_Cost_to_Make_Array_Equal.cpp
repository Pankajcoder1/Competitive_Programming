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
    long long minCost(vector<int> &nums, vector<int> &cost)
    {
        long long ans=LONG_MAX;
        long long n=nums.size();
        vector<long long> v(1000001,0);
        for(int i=0;i<n;i++){
            v[nums[i]]+=cost[i];
        }
        vector<long long> prefix(1000002, 0), suffix(1000002, 0);
        long long totalPrevious = 0;
        for (long long i = 1; i < 1000001; i++)
        {
            prefix[i]=prefix[i-1]+totalPrevious;
            totalPrevious += v[i];
        }
        totalPrevious = 0;
        for (long long i = 1000000; i > 0; i--)
        {
            suffix[i]=suffix[i+1]+totalPrevious;
            totalPrevious+=v[i];
        }

        for (long long i = 1; i <= 1000000; i++)
        {
            ans=min(prefix[i]+suffix[i],ans);
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
