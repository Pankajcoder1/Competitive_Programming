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
    int maximumRows(vector<vector<int>> &mat, int cols)
    {
        int n=mat.size();
        int m=mat[0].size();
        int ans=0;
        for(int i=0;i<(1<<n);i++){
            set<int> s;
            int count=0;
            // cout<<"row ";
            for(int j=0;j<n;j++){
                if(i&(1<<j)){
                    count++;
                    // cout<<j<<" ";
                    for(int k=0;k<m;k++){
                        if(mat[j][k]==1){
                            s.insert(k);
                        }
                    }
                }
            }
            // cout<<endl;
            if(s.size()<=cols){
                ans=max(ans,count);
            }
            // cout<<"ans "<<ans<<endl;
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