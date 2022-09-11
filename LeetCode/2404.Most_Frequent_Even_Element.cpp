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
    int mostFrequentEven(vector<int> &nums)
    {
        map<int,int> m;
        for(auto x:nums){
            if(!(x&1))
                m[x]++;
        }
        if(m.size()==0)
            return -1;
        else{
            int maxo=0;
            for(auto x:m){
                maxo=max(maxo,x.second);
            }
            for(auto x:m){
                if(x.second==maxo)
                    return x.first;
            }
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