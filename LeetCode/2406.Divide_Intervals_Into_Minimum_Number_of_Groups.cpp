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
    int minGroups(vector<vector<int>> &intervals)
    {
        sort(intervals.begin(),intervals.end());
        int n=intervals.size();
        multiset<int> s;
        for(auto x:intervals){
            int l = x[0], r = x[1];
            if (s.empty() || *s.begin() >= l)
            {
                s.insert(r);
                continue;
            }
            auto it = --s.lower_bound(l);
            s.erase(it);
            s.insert(r);
        }
        return s.size();
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

// [[1,3],[5,6],[8,10],[11,13]]
// [ [ 1, 10 ], [ 11, 13 ], [ 2, 7 ], [ 8, 12 ] ]