/*
    written by Pankaj Kumar.
    country:-INDIA
    Institute: National Institute of Technology, Uttarakhand
*/
typedef long long ll ;
typedef unsigned long long ull;
typedef vector<int> vl;
typedef vector<vector<ll>> vvl;
/*  Abbrevations  */
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define Endl "\n"
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
/*  --------------------MAIN PROGRAM----------------------------*/
// to run ctrl+b
const ll INF=LONG_MAX;
const ll mod1=1e9+7;
const ll mod2=998244353;

// Techniques
// divide into cases, brute force, pattern finding
// sort, greedy, binary search, two pointer
// transform into graph

// add main code here
class Solution {
public:
    int minSpeedOnTime(vector<int>& dist, double hour) {
        cout<<fixed<<setprecision(20);
        int first=0,second=INT_MAX;
        int n=sz(dist);
        double mini=n-1;
        if(hour<=mini)
            return -1;
        int ans=-1;
        while(second>first){
            // cout<<" ssfsd "<<first<<" "<<second<<endl;
            int mid=int(first+second)/2;
            double total_time=0;
            if(mid){
                for(int i=0;i<sz(dist);i++){
                    if(i!=sz(dist)-1){
                        total_time+=int(dist[i]/mid);
                        if(int(dist[i])%mid)
                            total_time++;
                        // cout<<"1 "<<total_time<<endl;
                    }
                    else{
                        // cout<<"mid is "<<mid<<endl;
                        total_time+=double(double(dist[i])/double(mid));
                        // cout<<"2 "<<total_time<<" "<<double(double(dist[i])/double(mid))<<endl;
                    }
                }
                // cout<<"total_time "<<total_time<<endl;
                if(total_time<=hour){
                    second=mid;
                    ans=mid;
                }
                else
                    first=mid+1;
            }
            else
                break;
            
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