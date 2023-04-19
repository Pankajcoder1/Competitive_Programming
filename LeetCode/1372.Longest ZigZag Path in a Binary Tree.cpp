/*
    written by Pankaj Kumar.
    country:-INDIA
*/
typedef long long ll ;
const ll INF=1e18;
const ll mod1=1e9+7;
const ll mod2=998244353;
//Add main code here

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
    int longestZigZag(TreeNode *root)
    {
        // first -> right, second -> left
        queue<pair<TreeNode *, pair<int, int>>> q;
        q.push(make_pair(root, make_pair(0, 0))); // push root node with left and right directions as 0

        int maxLen = 0;
        while (!q.empty())
        {
            TreeNode *node = q.front().first;
            int lenRight = q.front().second.first;
            int lenLeft = q.front().second.second;
            q.pop();

            maxLen = max(maxLen, max(lenRight, lenLeft));

            if (node->left)
            {
                q.push(make_pair(node->left, make_pair(0, lenRight + 1))); // push left child with left direction as 0 and right direction incremented by 1
            }
            if (node->right)
            {
                q.push(make_pair(node->right, make_pair(lenLeft + 1, 0))); // push right child with left direction incremented by 1 and right direction as 0
            }
        }

        return maxLen;
    }
};
