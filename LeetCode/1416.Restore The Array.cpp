class Solution
{
public:
    long long stringToLongLong(string s)
    {
        long long num;
        istringstream iss(s); // create a stringstream object from string s
        iss >> num;           // extract the integer from the stringstream
        return num;
    }

    int numberOfArrays(string s, int k)
    {
        int mod = 1e9 + 7;
        int n = s.size();

        // dp[i] stores the number of ways to split the substring s[0:i-1] into valid arrays
        vector<long long> dp(n + 1,0);

        // base case: dp[0] = 1 (empty string)
        dp[0] = 1;

        for (int i = 1; i <= n; i++)
        {
            long long num = 0;
            for(int size=1;size<=i && size<=10;size++){
                string temp=s.substr(i-size,size);
                // cout<<"temp is "<<temp<<endl;
                num=stringToLongLong(temp);
                // cout<<"covering "<<i-1<<" to "<<i-size<<endl;
                // cout<<"num is "<<num<<endl;
                if(s[i-size]=='0'){
                    continue;
                }
                if(num<=k){
                    dp[i]=(dp[i]+dp[i-size])%mod;
                }
                else{
                    break;
                }
            }
        }

        return dp[n];
    }
};
