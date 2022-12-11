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
    int maxStarSum(vector<int> &vals, vector<vector<int>> &edges, int k)
    {
        int n = vals.size();

        vector<vector<int>> graph(n + 1);
        int maxo = INT_MIN;

        for (auto x : edges)
        {
            graph[x[0]].push_back(vals[x[1]]);
            graph[x[1]].push_back(vals[x[0]]);
        }
        for(int i=0;i<n;i++){
            sort(graph[i].begin(),graph[i].end(),greater<int>());
            int sum=0;
            sum=vals[i];
            for(int j=0;j<k&&j<graph[i].size();j++){
                sum+=max(0,graph[i][j]);
            }
            maxo=max(maxo,sum);
        }
        return maxo;
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
