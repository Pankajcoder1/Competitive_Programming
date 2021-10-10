class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int m=matrix[0].size();
        int n=matrix.size();
        vector<vector<int>> dp(n+1,vector<int>(m+1,0));
        int ans=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(matrix[i-1][j-1]=='1')
                {
                    dp[i][j]=1+min({dp[i-1][j],dp[i][j-1],dp[i-1][j-1]});
                    ans=max(ans,dp[i][j]);
                }
                else
                    dp[i][j]=0;
            }
        }
        return ans*ans;
    }
};