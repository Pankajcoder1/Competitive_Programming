class Solution {
public:
    string longestPalindrome(string s) {
        int maxo=0;
        string ans="";
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;i-j>=0&&i+j<n;j++)
            {
                if(s[i-j]!=s[i+j])
                    break;
                int temp=2*j+1;
                if(temp>maxo)
                {
                    maxo=temp;
                    ans=s.substr(i-j,temp);
                }
            }
        }
        
        for(int i=0;i<n-1;i++)
        {
            for(int j=1;i-j+1>=0&&i+j<n;j++)
            {
                if(s[i-j+1]!=s[i+j])
                    break;
                int temp=2*j;
                if(temp>maxo)
                {
                    maxo=temp;
                    ans=s.substr(i-j+1,temp);
                }
            }
        }
        return ans;
    }
};