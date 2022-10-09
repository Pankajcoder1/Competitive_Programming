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
    int hardestWorker(int n, vector<vector<int>> &logs)
    {
        int ans=INT_MAX,maxo=0;
        for(int i=0;i<logs.size();i++){
            int temp=0;
            if (i == 0)
            {
                temp = logs[i][1];
            }
            else{
                temp=logs[i][1]-logs[i-1][1];
            }
            maxo=max(maxo,temp);
        }
        for(int i=0;i<logs.size();i++){
            int temp=0;
            if(i==0){
                temp=logs[i][1];
            }
            else
            {
                temp = logs[i][1] - logs[i - 1][1];
            }
            if(temp==maxo){
                ans=min(ans,logs[i][0]);
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
