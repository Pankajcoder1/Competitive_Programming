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
    int minimizeXor(int num1, int num2)
    {
        int noOfBits = 0;
        while(num2){
            if(num2&1){
                noOfBits++;
            }
            num2>>=1;
        }
        vector<int> bits1(32,0),bits2(32,0);
        int pos=0;
        while(num1){
            if(num1&1){
                bits1[pos]++;
            }
            pos++;
            num1>>=1;
        }
        for(int i=31;i>=0;i--){
            if(bits1[i] && noOfBits){
                noOfBits--;
                bits2[i]++;
            }
        }
        for(int i=0;i<32;i++){
            if(bits1[i]==0 && noOfBits){
                noOfBits--;
                bits2[i]++;
            }
        }
        int ans=0;
        for(int i=0;i<32;i++){
            if(bits2[i]){
                ans+=pow(2,i);
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
