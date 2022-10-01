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
    bool equalFrequency(string word)
    {
        vector<int> f(26,0);
        for(auto c:word)
            f[c-'a']++;
        for(int i=0;i<26;i++){
            vector<int> temp=f;
            if(f[i]<=0){
                continue;
            }
            temp[i]--;
            set<int> s;
            
            for(auto x:temp){
                if(x>0){
                    s.insert(x);
                }
            }
            if(s.size()==1){
                return true;
            }
        }
        return false;
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