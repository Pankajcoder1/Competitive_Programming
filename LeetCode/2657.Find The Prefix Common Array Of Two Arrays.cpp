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
    vector<int> findThePrefixCommonArray(vector<int> &A, vector<int> &B)
    {
        vector<int> seen(51,0);
        int n = A.size();
        vector<int> ans(n, 0);
        int count=0;

        for(int i=0;i<n;i++){
            seen[A[i]]++;
            seen[B[i]]++;
            if(seen[B[i]]>1){
                count++;
            }

            if (seen[A[i]] > 1)
            {
                count++;
            }

            if(A[i]==B[i]){
                count--; //removing double count of same element
            }

            ans[i]=count;
        }

        return ans;
    }
};
