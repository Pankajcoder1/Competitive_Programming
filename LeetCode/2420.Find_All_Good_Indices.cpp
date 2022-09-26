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

class Solution
{
public:
    vector<int> goodIndices(vector<int> &nums, int k)
    {
        int n = nums.size();
        vector<int> ans;
        vector<int> left(n, 0), right(n, 0);
        for(int i=1;i<n;i++){
            if(nums[i]<=nums[i-1]){
                left[i]=left[i-1]+1;
            }
            else{
                left[i]=0;
            }
        }
        for(int i=n-2;i>=0;i--){
            if(nums[i]<=nums[i+1]){
                right[i]=right[i+1]+1;
            }
            else{
                right[i]=0;
            }
        }
        for(int i=k;i<n-k;i++){
            if(left[i-1]>=k-1 && right[i+1]>=k-1){
                ans.push_back(i);
            }
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