/*
    written by Pankaj Kumar.
    country:-INDIA
*/
typedef long long ll ;
const ll INF=1e18;
const ll mod1=1e9+7;
const ll mod2=998244353;
//Add main code here

class Solution
{
public:
    int widthOfBinaryTree(TreeNode *root)
    {
        if (!root)
        {
            return 0;
        }

        queue<pair<TreeNode *, unsigned long long>> q;
        q.push(make_pair(root, 1)); // push root node with its index as 1

        int maxWidth = 0;
        while (!q.empty())
        {
            int size = q.size();
            unsigned long long left = q.front().second; // get the leftmost index of current level
            unsigned long long right = 0;               // initialize right index for current level
            for (int i = 0; i < size; i++)
            {
                TreeNode *node = q.front().first;
                right = q.front().second; // update right index for current node
                q.pop();

                if (node->left)
                {
                    q.push(make_pair(node->left, 2 * right)); // push left child with index 2 * right
                }
                if (node->right)
                {
                    q.push(make_pair(node->right, 2 * right + 1)); // push right child with index 2 * right + 1
                }
            }
            maxWidth = max(maxWidth, (int)(right - left + 1)); // update the maximum width of the level
        }

        return maxWidth;
    }
};
