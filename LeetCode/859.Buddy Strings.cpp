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
    bool buddyStrings(string A, string B)
    {
        if (A.size() != B.size())
            return false;

        if (A == B)
        {
            unordered_set<char> uniqueChars(A.begin(), A.end());
            return uniqueChars.size() < A.size();
        }

        vector<int> diffIndices;

        for (int i = 0; i < A.size(); i++)
        {
            if (A[i] != B[i])
                diffIndices.push_back(i);
        }

        if (diffIndices.size() != 2)
            return false;

        return A[diffIndices[0]] == B[diffIndices[1]] && A[diffIndices[1]] == B[diffIndices[0]];
    }
};
