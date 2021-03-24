class Solution {
public:
    int numDecodings(string s) {
        if(s[0]=='0')
            return 0;
        int n=s.size();
        vector<int> dp(n+1,0);
        dp[0]=1;
        dp[1]=1;
        for(int i=2;i<=n;i++)
        {
            int ones=int(s[i-1]-'0');
            int tens=int (s[i-2]-'0');
            int nums=(tens*10)+ones;
            if(ones>0)
                dp[i]=dp[i-1];
            if(nums>0&&tens!=0&&nums<=26)
                dp[i]+=dp[i-2];
        }
        return dp[n];
    }
};