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
    long long ans = 0;
    vector<vector<int>> graph;
    vector<bool> visited;
    long long dfs(int node, int seats, long long count)
    {
        visited[node] = true;
        long long temp = 1;
        for (auto x : graph[node])
        {
            if (!visited[x])
            {
                temp += dfs(x, seats, 0);
            }
        }
        // cout<<"node is "<<node<<" count is "<<temp<<endl;
        ans += (temp + seats - 1) / seats;
        return temp;
    }

    long long minimumFuelCost(vector<vector<int>> &roads, int seats)
    {
        graph.resize(roads.size() + 1);
        visited.resize(roads.size() + 1, false);
        for (auto x : roads)
        {
            graph[x[0]].push_back(x[1]);
            graph[x[1]].push_back(x[0]);
        }
        visited[0] = true;
        for (auto x : graph[0])
        {
            long long count = 0;
            dfs(x, seats, count);
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
