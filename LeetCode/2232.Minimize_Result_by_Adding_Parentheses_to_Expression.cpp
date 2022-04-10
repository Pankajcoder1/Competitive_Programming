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
    string minimizeResult(string expression) {
        string s1="",s2="";
        int i=0;
        string final_ans="";

        int mini=INT_MAX;
        for(;i<sz(expression);i++){
            // cout<<expression[i]<<" "<<i<<endl;
            if(expression[i]=='+'){
                break;
            }
            else{
                s1+=expression[i];
            }
        }
        i++;
        for(;i<sz(expression);i++){
            s2+=expression[i];
        }
        reverse(all(s2));
        // cout<<"s1 and s2 is "<<s1<<" "<<s2<<endl;
        vector<int> v1,v2,v3,v4;
        int num=0;
        for(i=0;i<sz(s1);i++){
            string temp=s1.substr(i,sz(s1)-i);
            num=stoi(temp);
            v1.pb(num);
            temp=s1.substr(0,i);
            if(temp.size()>0){
                num=stoi(temp);
                v3.pb(num);
            }
        }
        num=0;
        for(i=0;i<sz(s2);i++){
            string temp=s2.substr(i,sz(s2)-i);
            reverse(all(temp));
            num=stoi(temp);
            v2.pb(num);
            temp=s2.substr(0,i);
            reverse(all(temp));
            if(temp.size()>0){
                num=stoi(temp);
                v4.pb(num);
            }
        }
        reverse(all(v1));
        reverse(all(v2));
        reverse(all(v3));
        reverse(all(v4));
        // cout<<"v1 is "<<endl;
        // printv(v1);
        // cout<<"v2 is "<<endl;
        // printv(v2);
        // cout<<"v3 is "<<endl;
        // printv(v3);
        // cout<<"v4 is "<<endl;
        // printv(v4);

        for(int k=0;k<sz(v1);k++){
            for(int j=0;j<sz(v2);j++){
                int temp=(v1[k]+v2[j]);
                string temp_ans="";
                if(k!=sz(v1)-1){
                    temp*=v3[k];
                    temp_ans+=to_string(v3[k]);
                }
                temp_ans+="(";
                temp_ans+=to_string(v1[k]);
                temp_ans+="+";
                temp_ans+=to_string(v2[j]);
                temp_ans+=")";
                if(j!=sz(v2)-1){
                    temp*=v4[j];
                    temp_ans+=to_string(v4[j]);
                }
                
                if(temp<mini){
                    mini=temp;
                    final_ans = temp_ans;
                    // cout<<"final_ans is "<<final_ans<<endl;
                }
                // cout<<"temp is "<<temp<<endl;
            }
        }
        
        return final_ans;
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