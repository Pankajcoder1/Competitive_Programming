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
    void inorder(TreeNode* root,vector<int>& v){
        if(root==NULL)
            return;
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
    }
    vector<vector<int>> closestNodes(TreeNode *root, vector<int> &queries)
    {
        vector<int> v;
        inorder(root, v);
        vector<vector<int>> ans;
        for(auto x:queries){
            int num1=-1,num2=-1;
            int first=0,last=v.size()-1;
            while(last>=first){
                int mid=(first+last)/2;
                if(v[mid]<=x){
                    num1=v[mid];
                    first=mid+1;
                }
                else{
                    last=mid-1;
                }
            }
            first=0,last=v.size()-1;
            while(last>=first){
                int mid=(first+last)/2;
                if(v[mid]>=x){
                    num2=v[mid];
                    last=mid-1;
                }
                else{
                    first=mid+1;
                }
            }
            ans.push_back({num1,num2});
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
