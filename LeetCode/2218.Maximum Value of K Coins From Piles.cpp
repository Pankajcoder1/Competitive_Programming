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
    int maxValueOfCoins(vector<vector<int>> &piles, int k)
    {
        int n=piles.size();
        vector<vector<int>> dp(n+1, vector<int>(k+1,0));

        for(int noOfPiles=1;noOfPiles<=n;noOfPiles++){
            // noOfPiles -> currently aab tak itne pile select kiye coin lene ke liye
            for(int noOfCoin=1;noOfCoin<=k;noOfCoin++){
                // noOfCoin -> aab tak total itne coin select kiye
                dp[noOfPiles][noOfCoin]+=dp[noOfPiles-1][noOfCoin];
                int sum=0;
                for(int takeCoin=1;takeCoin<=min(noOfCoin,(int)piles[noOfPiles-1].size());takeCoin++){
                    // takeCoin -> currect pile se itne coin select kiye
                    sum += piles[noOfPiles - 1][takeCoin-1];
                    dp[noOfPiles][noOfCoin] = max(dp[noOfPiles][noOfCoin], dp[noOfPiles - 1][noOfCoin - takeCoin] + sum);
                }
            }
        }
        return dp[n][k];
    }
};