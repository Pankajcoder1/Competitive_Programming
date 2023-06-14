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
    int minDiffInBST(TreeNode *root)
    {
        int minDiff = INT_MAX;
        int prevVal = -1;

        inorderTraversal(root, prevVal, minDiff);

        return minDiff;
    }

private:
    void inorderTraversal(TreeNode *node, int &prevVal, int &minDiff)
    {
        if (!node)
            return;

        inorderTraversal(node->left, prevVal, minDiff);

        if (prevVal != -1)
            minDiff = min(minDiff, node->val - prevVal);

        prevVal = node->val;

        inorderTraversal(node->right, prevVal, minDiff);
    }
};