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
    
    TreeNode *replaceValueInTree(TreeNode *root)
    {
        
        queue<TreeNode*> q;
        TreeNode *dummy = root;
        root->val=0;
        q.push(dummy);
        while(q.size()){
            queue<TreeNode*> temp;
            map<TreeNode *, int> m;
            while(q.size()){
                if(q.front()->left!=nullptr){
                    temp.push(q.front()->left);
                    m[q.front()] += q.front()->left->val;
                }
                if(q.front()->right!=nullptr){
                    temp.push(q.front()->right);
                    m[q.front()] += q.front()->right->val;
                }
                q.pop();
            }
            int sum=0;
            for(auto x:m){
                sum+=x.second;
            }
            for(auto x:m){
                int temp2=0;
                if(x.first->left!=nullptr){
                    temp2+=x.first->left->val;
                }
                if (x.first->right != nullptr)
                {
                    temp2 += x.first->right->val;
                }
                temp2=sum-temp2;
                if (x.first->left != nullptr)
                {
                    x.first->left->val=temp2;
                }
                if (x.first->right != nullptr)
                {
                    x.first->right->val = temp2;
                }
            }
                
            q=temp;
        }
        
        return root;
    }
};