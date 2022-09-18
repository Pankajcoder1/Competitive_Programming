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
    void preorder(TreeNode *root1, TreeNode *root2, int height)
    {
        // Base cases
        if (root1 == nullptr || root2 == nullptr)
            return;

        // Swap subtrees if level is even
        if (height % 2 == 0) {
            swap(root1->val, root2->val);
        }

        preorder(root1->left, root2->right, height + 1);
        preorder(root1->right, root2->left, height + 1);
    }

    TreeNode *reverseOddLevels(TreeNode *root)
    {
        preorder(root->left, root->right, 0);
        return root;
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