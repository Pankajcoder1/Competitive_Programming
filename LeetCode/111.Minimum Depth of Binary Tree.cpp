/*
    written by Pankaj Kumar.
    country:-INDIA
*/
typedef long long ll ;
const ll INF=1e18;
const ll mod1=1e9+7;
const ll mod2=998244353;
//Add main code here

#include <queue>

class Solution
{
public:
    int minDepth(TreeNode *root)
    {
        if (root == nullptr)
        {
            return 0;
        }

        int minDepth = 0;
        queue<TreeNode *> q;
        q.push(root);

        while (!q.empty())
        {
            int size = q.size();
            minDepth++;

            for (int i = 0; i < size; i++)
            {
                TreeNode *node = q.front();
                q.pop();

                if (node->left == nullptr && node->right == nullptr)
                {
                    return minDepth;
                }

                if (node->left != nullptr)
                {
                    q.push(node->left);
                }

                if (node->right != nullptr)
                {
                    q.push(node->right);
                }
            }
        }

        return minDepth;
    }
};
