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
    int minNumberOfHours(int initialEnergy, int initialExperience, vector<int> &energy, vector<int> &experience)
    {
        int n=energy.size();
        int ans=0;

        for(int i=0;i<n;i++){
            if(initialEnergy<energy[i]+1){
                int temp = energy[i]+1-initialEnergy;
                ans+=temp;
                initialEnergy+=temp;
            }
            if(initialExperience<(experience[i]+1)){
                int required = experience[i] + 1 - initialExperience;
                ans+=required;
                initialExperience+=required;
            }
            initialExperience += experience[i];
            initialEnergy -= energy[i];
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