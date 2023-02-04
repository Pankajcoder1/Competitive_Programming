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
    int maxCount(vector<int> &banned, int n, int maxSum)
    {
        map<int, int> m;
        for (int i = 0; i < banned.size(); i++)
        {
            m[banned[i]]++;
        }
        int count = 0;
        for(int i=1;i<=n;i++){
            if(m[i]==0){
                if(i<=maxSum){
                    count++;
                    maxSum-=i;
                }
            }
        }
        return count;
    }
};