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
    vector<int> answerQueries(vector<int> &nums, vector<int> &queries)
    {
        sort(nums.begin(), nums.end());
        int m=queries.size();
        int n=nums.size();
        vector<int> ans(m,0);

        // prefix sum
        for(int i=1;i<n;i++){
            nums[i]+=nums[i-1];
        }
        // value, index
        vector<pair<int,int>> query(m);
        for(int i=0;i<m;i++){
            query[i].first=queries[i];
            query[i].second=i;
        }
        sort(query.begin(),query.end());
        for(int i=0;i<m;i++){
            int low=0,high=n-1;
            while(low<=high){
                int mid=low+(high-low)/2;
                if(nums[mid]>query[i].first){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            ans[query[i].second]=low;
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