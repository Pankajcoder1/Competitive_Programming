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
    int vowel(char c)
    {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
    
    vector<int> vowelStrings(vector<string> &words, vector<vector<int>> &queries)
    {
        int n = words.size();
        vector<int> prefix(n + 1);
        for (int i = 0; i < n; i++)
        {
            int cur = vowel(words[i][0]) && vowel(words[i].back());
            prefix[i + 1] = prefix[i] + cur;
        }

        vector<int> ans;
        for (auto &q : queries)
        {
            int cur = prefix[q[1] + 1] - prefix[q[0]];
            ans.push_back(cur);
        }
        return ans;
    }
};