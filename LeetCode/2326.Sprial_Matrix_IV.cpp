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

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> ans(m,vector<int>(n,-1));
        int k=0,l=0;
        while(k<m && l<n){
            // top row of boundary
            for(int i=l;i<n;i++){
                if(head==nullptr){
                    break;
                }
                ans[k][i]=head->val;
                head=head->next;
            }
            k++;

            for(int i=k;i<m;i++){
                if(head==nullptr){
                    break;
                }
                ans[i][n-1]=head->val;
                head=head->next;
            }
            n--;

            if(k<m){
                for(int i=n-1;i>=l;i--){
                    if(head==nullptr){
                        break;
                    }
                    ans[m-1][i]=head->val;
                    head=head->next;
                }
                m--;
            }
            if(l<n){
                for(int i=m-1;i>=k;i--){
                    if(head==nullptr){
                        break;
                    }
                    ans[i][l]=head->val;
                    head=head->next;
                }
                l++;
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
