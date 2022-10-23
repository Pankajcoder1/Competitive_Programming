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
  bool isAnagram(string s, string t)
  {
    if(s.size()!=t.size()){
      return false;
    }
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    for(int i=0;i<s.size();i++){
      if(s[i]!=t[i]){
        return false;
      }
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