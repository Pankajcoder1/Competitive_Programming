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
    int xorAllNums(vector<int> &nums1, vector<int> &nums2)
    {
        map<long, long> mp;
        long long n = nums1.size();
        long long m = nums2.size();
        for(auto x:nums1){
            mp[x]+=m;
        }
        for(auto x:nums2){
            mp[x]+=n;
        }
        for(auto x:mp){
            mp[x.first]%=2;
        }
        long long ans=0;
        for(auto x:mp){
            if(x.second==1){
                ans^=x.first;
            }
        }
        return (int)ans;
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
