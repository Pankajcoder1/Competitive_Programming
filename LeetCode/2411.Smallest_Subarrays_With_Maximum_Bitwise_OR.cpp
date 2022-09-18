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

class Solution {
public:
    vector<int> smallestSubarrays(vector<int>& nums) {
        int n = nums.size(); 
        vector<queue<int>> loc(30); 
        for (int i = 0; i < n; ++i) {
            for (int bit = 0; bit < 30; ++bit) {
                if (nums[i] & 1<<bit) loc[bit].push(i); 
            }
        }
        vector<int> ans;
        for (int i = 0; i < nums.size(); ++i) {
            int hi = i; 
            for (auto& q : loc) {
                if (q.size() && i > q.front()) q.pop(); 
                if (q.size()) hi = max(hi, q.front()); 
            }
            ans.push_back(hi-i+1); 
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