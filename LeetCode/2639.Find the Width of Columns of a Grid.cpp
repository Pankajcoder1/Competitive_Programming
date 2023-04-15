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
    vector<int> findColumnWidth(vector<vector<int>> &grid)
    {
        vector<int> ans;
        int n=grid.size();
        int m=grid[0].size();
        for(int j=0;j<m;j++){
            int maxo=0;
            for(int i=0;i<n;i++){
                int len = 0;
                if(grid[i][j]<0){
                    len++;
                }
                string temp=to_string(abs(grid[i][j]));
                len+=temp.size();
                maxo = max(maxo, len);
            }
            ans.push_back(maxo);
        }
        return ans;
    }
};