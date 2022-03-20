/*
    written by Pankaj Kumar.
    country:-INDIA
    Institute: National Institute of Technology, Uttarakhand
*/
typedef long long ll ;
typedef vector<int> vl;
typedef vector<vector<int>> vvl;
#define speed cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(0);
/*  Abbrevations  */
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
// Some print
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
// sort
#define all(V) (V).begin(),(V).end()
#define srt(V) sort(all(V))
#define srtGreat(V) sort(all(V),greater<ll>())
// some extra
#define printv(v) for(ll i=0;i<ll(v.size());i++){cout<<v[i]<<" ";} cout<<endl;
#define precision(x) cout<<fixed<<setprecision(x);
#define sz(V) ll(V.size())


/* ascii value
A=65,Z=90,a=97,z=122
*/

/* Some syntax 
//Syntax to create a min heap for priority queue
//priority_queue <int, vector<int>, greater<int>>pq;
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

class Solution {
public:
    vector<int> maximumBobPoints(int numArrows, vector<int>& aliceArrows) {
        vector<int> ans(12,0);
        int maxo=0;
        for(int i=0;i<(1<<12);i++){
            int sum =0;
            vector<int> temp(12,0);
            int count=numArrows;
            for(int j=0;j<12;j++){
                if(i&(1<<j)){
                    if(aliceArrows[j]+1<=count){
                        count-=aliceArrows[j]+1;
                        temp[j]=aliceArrows[j]+1;
                    }
                }
            }
            if(count){
                int pos=0,mini=INT_MAX;
                for(int i=0;i<12;i++){
                    if(temp[i]<mini){
                        mini=temp[i];
                        pos=i;
                    }
                }
                temp[pos]=count;
                count=0;

            }
            sum=0;
            for(int i=0;i<12;i++){
                if(temp[i]>aliceArrows[i]){
                    sum+=(i);
                }
            }
            if(sum>maxo){
                maxo=sum;
                ans=temp;
                // cout<<"maxo is "<<maxo<<endl;
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