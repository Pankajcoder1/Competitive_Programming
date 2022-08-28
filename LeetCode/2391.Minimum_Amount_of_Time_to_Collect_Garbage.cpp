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
    int garbageCollection(vector<string> &garbage, vector<int> &travel)
    {
        int ans=0;
        // count, last pos
        //p->0, g->1, m->2
        vector<pair<int,int>> truck(3,{0,-1});
        for(int i=0;i<garbage.size();i++){
            for(auto y:garbage[i]){
                if(y=='P'){
                    truck[0].first++;
                    truck[0].second=i;
                }
                else if(y=='G'){
                    truck[1].first++;
                    truck[1].second=i;
                }
                else{
                    truck[2].first++;
                    truck[2].second=i;
                }
            }
        }
        for(int i=1;i<travel.size();i++){
            travel[i]+=travel[i-1];
        }
        for(int i=0;i<3;i++){
            if(truck[i].second>0){
                ans+=travel[truck[i].second-1]+truck[i].first;
            }
            else if(truck[i].second==0){
                ans+=truck[i].first;
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