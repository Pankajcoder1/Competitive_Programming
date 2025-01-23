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
    int countServers(vector<vector<int>> &grid)
    {
        int n=grid.size(),m=grid[0].size();
        int ans=0;

        vector<int> row(n,0),col(m,0);

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    row[i]++;
                    col[j]++;
                    ans++;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1 && row[i]==1 && col[j]==1){
                    ans--;
                }
            }
        }

        return ans;
    }
};
