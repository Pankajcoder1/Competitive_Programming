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
    long long totalCost(vector<int> &costs, int k, int candidates)
    {
        int n = costs.size();

        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;

        int s=0,e=n-1;
        for(int i=0;i<candidates;i++)
        {
            if(s<=e){
                pq.push({costs[i],i});
                s=i+1;
            }
        }
        for(int i=n-1;i>=n-candidates;i--)
        {
            if(s<=e){
                pq.push({costs[i],i});
                e=i-1;
            }
        }

        long long ans=0;
        for(int i=0;i<k;i++){
            auto temp1=pq.top();
            ans+=temp1.first;
            pq.pop();
            if(temp1.second<s && s<=e){
                pq.push({costs[s],s});
                s++;
            }
            else if(temp1.second>e && s<=e){
                pq.push({costs[e],e});
                e--;
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