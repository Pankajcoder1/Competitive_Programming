class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()<2)
            return 0;
        int mini=prices[0];
        int n=prices.size();
        int maxo=0;
        for(int i=0;i<n;i++)
        {
            mini=min(mini,prices[i]);
            int diff=prices[i]-mini;
            maxo=max(diff,maxo);
        }
        return maxo;
    }
};