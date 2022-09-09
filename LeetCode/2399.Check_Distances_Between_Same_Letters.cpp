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
    bool checkDistances(string s, vector<int> &distance)
    {
        vector<int> v(26, -1);
        for(int i=0;i<s.size();i++){
            int temp=s[i]-'a';
            if(v[temp]==-1){
                v[temp]=i;
            }
            else{
                v[temp]=i-v[temp]-1;
            }
        }
        for(int i=0;i<26;i++){
            if(v[i]==-1){
                v[i]=distance[i];
            }
        }
        // for(auto x:v){
        //     cout<<x<<" ";
        // }
        // cout<<endl;
        return v==distance;
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