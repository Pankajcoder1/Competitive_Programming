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
    long long dividePlayers(vector<int> &skill)
    {
        map<int,int> m;
        long long totalSum=0;
        for(auto x:skill){
            m[x]++;
            totalSum+=x;
        }
        int n=skill.size();
        n/=2;
        if(totalSum%n){
            return -1;
        }
        long long sum=totalSum/n;
        
        long long group=0,ans=0;
        for(auto x:skill){
            if(m[x]>0 && m[sum-x]>0){
                group++;
                ans+=(x*(sum-x));
                m[x]--;
                m[sum-x]--;
            }
        }
        if(group==n){
            return ans;
        }
        else{
            return -1;
        }
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
