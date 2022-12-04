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
    bool isCircularSentence(string sentence)
    {
        vector<string> v;
        string temp="";
        for (auto x : sentence)
        {
            if(x==' '){
                if(temp!=""){
                    v.push_back(temp);
                    temp="";
                }
            }
            else{
                temp+=x;
            }
        }
        if(temp!=""){
            v.push_back(temp);
        }
        // for(auto x:v){
        //     cout<<"x is "<<x<<endl;
        // }
        int n=v.size();
        for(int i=0;i+1<n;i++){
            if(v[i+1][0]!=v[i][v[i].size()-1]){
                return false;
            }
        }
        if(v[0][0]!=v[n-1][v[n-1].size()-1]){
            return false;
        }
        return true;
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
