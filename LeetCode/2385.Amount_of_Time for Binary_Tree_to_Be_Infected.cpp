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

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    unordered_map<int, vector<int>> v; // adjacency list

    // create undirected graph for every parent-child  -> BFS
    void createGraph(TreeNode *root)
    {
        queue<pair<TreeNode *, int>> q;
        q.push({root, -1});
        while (q.size())
        {
            auto [node, parent] = q.front();
            q.pop();
            if (parent != -1)
            {
                v[parent].push_back(node->val);
                v[node->val].push_back(parent);
            }
            if (node->left)
                q.push({node->left, node->val});
            if (node->right)
                q.push({node->right, node->val});
        }
    }

    int amountOfTime(TreeNode *root, int start)
    {
        // create graph of given tree
        createGraph(root);

        // start bfs
        queue<int> q;
        unordered_map<int, bool> seen;
        q.push(start);
        seen[start] = true;
        int time = 0;
        for (; q.size(); time++)
        {
            int n = q.size();
            while (n--)
            {
                auto node = q.front();
                q.pop();
                for (auto i : v[node])
                {
                    if (!seen[i])
                    {
                        q.push(i);
                        seen[i] = true;
                    }
                }
            }
        }
        return time - 1;
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