/*
    written by Pankaj Kumar.
    country:-INDIA
    Institute: National Institute of Technology, Uttarakhand
*/
typedef long long ll ;
typedef unsigned long long ull;
typedef vector<int> vl;
typedef vector<vector<int>> vvl;
#define speed cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
/*  Abbrevations  */
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
// loops
#define forin(arr,n) for(ll i=0;i<n;i++) cin>>arr[i];
// Some print
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
// sort
#define all(V) (V).begin(),(V).end()
#define srt(V) sort(all(V))
#define srtGreat(V) sort(all(V),greater<ll>())
// some extra
#define printv(v) for(ll i=0;i<ll(v.size());i++){cout<<v[i]<<" ";} cout<<endl;
#define precision(x) cout<<fixed<<setprecision(x);
#define sz(V) ll(V.size())


/* ascii value
A=65,Z=90,a=97,z=122
*/

/* Some syntax 
//Syntax to create a min heap for priority queue
//priority_queue <int, vector<int>, greater<int>>pq;
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
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(root->right==nullptr&&root->left==nullptr){
            return true;
        }
        if(root->right==nullptr&&root->left!=nullptr){
            return false;
        }
        if(root->left==nullptr&&root->right!=nullptr){
            return false;
        }
        if(root->right->val!=root->left->val){
            return false;
        }
        queue<TreeNode*> q1,q2;
        q1.push(root->left);
        q2.push(root->right);
        while(q1.size()){
            queue<TreeNode*> tempq1,tempq2;
            while(q1.size()){
                TreeNode* left_side=q1.front();
                q1.pop();
                TreeNode* right_side=q2.front();
                q2.pop();
                if((left_side==nullptr&&right_side==nullptr)){
                    continue;
                }
                if(left_side==nullptr||right_side==nullptr){
                    return false;
                }
                if(left_side->val!=right_side->val){
                    return false;
                }
                tempq1.push(left_side->left);
                tempq1.push(left_side->right);
                tempq2.push(right_side->right);
                tempq2.push(right_side->left);
            }
            q1=tempq1;
            q2=tempq2;
        }
        return true;

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