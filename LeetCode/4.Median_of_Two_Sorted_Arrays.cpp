/*
    written by Pankaj Kumar.
    country:-INDIA
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
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double ans = 0.0;
        int n = nums1.size() + nums2.size();
        vector<int> nums(n);
        int i = 0, j = 0, k = 0;
        while(i < nums1.size() || j<nums2.size()){
            if(i<nums1.size() && j<nums2.size()){
                if(nums1[i] < nums2[j]){
                    nums[k] = nums1[i];
                    i++;
                }
                else{
                    nums[k] = nums2[j];
                    j++;
                }
                k++;
            }
            else if(i<nums1.size()){
                nums[k] = nums1[i];
                i++;
                k++;
            }
            else if(j<nums2.size()){
                nums[k] = nums2[j];
                j++;
                k++;
            }
        }
        printv(nums);
        if(n&1){
            ans = nums[n/2];
        }
        else{
            ans = (nums[n/2] + nums[n/2-1])/2.0;
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