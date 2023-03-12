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
    bool isVowel(char ch){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            return true;
        }
        return false;
    }


    int vowelStrings(vector<string> &words, int left, int right)
    {
        int ans = 0;
        for (int i = left; i <= right; i++)
        {
            if(isVowel(words[i].front()) && isVowel(words[i].back())){
                ans++;
            }
        }
        return ans;
    }
};