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
    int convertTime(string current, string correct) {
        int ans=0;
        int minutes1=(current[3]-'0')*10+(current[4]-'0');
        int minutes2=(correct[3]-'0')*10+(correct[4]-'0');
        // cout<<"minutes1= "<<minutes1<<" minutes2= "<<minutes2<<endl;
        int diff=0;
        int flag=0;
        if(minutes2>=minutes1){
            diff=minutes2-minutes1;
        }
        else{
            diff=minutes2+60-minutes1;
            flag++;
        }
        while(diff>=60){
            diff-=60;
            ans++;
        }
        while(diff>=15){
            diff-=15;
            ans++;
        }
        while(diff>=5){
            diff-=5;
            ans++;
        }
        ans+=diff;
        
        // cout<<"ans= "<<ans<<endl;
        int hour1=(current[0]-'0')*10+(current[1]-'0');
        int hour2=(correct[0]-'0')*10+(correct[1]-'0');
        if(flag){
            hour1++;
        }
        // cout<<"hour1 "<<hour1<<" hour2 "<<hour2<<endl;
        if(hour2>=hour1){
            ans+=hour2-hour1;
        }
        else{
            ans+=hour2+24-hour1;
        }
        // if(flag){
        //     ans--;
        // }
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