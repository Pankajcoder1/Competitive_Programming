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
    long long maximumSubarraySum(vector<int> &nums, int k)
    {
        int n=nums.size();
        long long sum=0,maxo=0;

        map<int,int> check;
        for(int i=0;i<k-1;i++){
            sum+=nums[i];
            check[nums[i]]++;
        }
        for(int i=k-1;i<n;i++){
            check[nums[i]]++;
            sum+=nums[i];
            if(check.size()==k){
                maxo=max(maxo,sum);
            }
            if(check[nums[i-k+1]]==1){
                check.erase(nums[i-k+1]);
            }
            else{
                check[nums[i-k+1]]--;
            }
            sum-=nums[i-k+1];
        }
        return maxo;
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
