/*
    written by Pankaj Kumar.
    country:-INDIA
*/
typedef long long ll;
const ll INF = 1e18;
const ll mod1 = 1e9 + 7;
const ll mod2 = 998244353;
// Add main code here

class Solution
{
public:
    int countPalindromicSubsequence(string s)
    {
        int n = s.size(),ans=0;
        vector<int> pref(26,0), suff(26,0), se(26*26,0);

        for (int i = 0; i < n; i++)
        {
            suff[s[i]-'a']++;
        }
        for (int i = 0; i < n; i++)
        {
            suff[s[i]-'a']--;
            for (char ch = 'a'; ch <= 'z'; ch++)
            {
                if (min(pref[ch-'a'], suff[ch-'a']) > 0)
                {
                    // plaindrome string = ch+s[i]+ch;

                    se[(ch-'a')*26+(s[i]-'a')]++;
                }
            }
            pref[s[i]-'a']++;
        }
        for(auto x:se){
            if(x>0){
                ans++;
            }
        }

        return ans;
    }
};
