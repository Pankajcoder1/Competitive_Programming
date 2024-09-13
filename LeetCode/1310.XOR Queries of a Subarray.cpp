/*
    written by Pankaj Kumar.
    country:-INDIA
*/
typedef long long ll ;
const ll INF=1e18;
const ll mod1=1e9+7;
const ll mod2=998244353;
//Add main code here

class Solution
{
public:
    vector<int> xorQueries(vector<int> &arr, vector<vector<int>> &queries)
    {
        vector<int> ans(queries.size());
        int n=arr.size();
        vector<int> pref_xor(n,arr[0]);
        
        for(int i=1;i<n;i++){
            pref_xor[i]=pref_xor[i-1]^arr[i];
        }
        for(int i=0;i<queries.size();i++){
            int a=queries[i][0], b=queries[i][1];
            if(a==0){
                ans[i]=pref_xor[b];
            }
            else{
                ans[i]=pref_xor[b]^pref_xor[a-1];
            }
        }
        return ans;
    }
};