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
    int dfs(vector<vector<int>> &grid,vector<vector<bool>> &visit,int i,int j,int n,int m){
        int temp = 0;
        if(i>=n || j>=m || i<0 || j<0 || grid[i][j]==0){
            return 0;
        }
        if(!visit[i][j]){
            temp+=grid[i][j];
            visit[i][j]=true;
        }
        temp+= dfs(grid,visit,i+1,j,n,m);
        temp+= dfs(grid, visit, i - 1, j, n, m);
        temp+= dfs(grid, visit, i, j+1, n, m);
        temp+= dfs(grid, visit, i, j-1, n, m);

        return temp;
    }

    int findMaxFish(vector<vector<int>> &grid)
    {
        int maxo=0;
        int n=grid.size(),m=grid[0].size();
        vector<vector<bool>> visit(n,vector<bool>(m,false));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!visit[i][j]){
                    maxo=max(dfs(grid,visit,i,j,n,m),maxo);
                }
            }
        }

        return maxo;
    }
};
