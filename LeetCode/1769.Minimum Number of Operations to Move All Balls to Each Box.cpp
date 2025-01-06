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
    vector<int> minOperations(string boxes)
    {
        int n = boxes.length();
        vector<int> distances(n, 0);

        int prefixCount = 0;
        int prefixSum = 0;

        for (int i = 0; i < n; ++i)
        {
            distances[i] = prefixCount * i - prefixSum;
            if (boxes[i] == '1')
            {
                ++prefixCount;
                prefixSum += i;
            }
        }

        int suffixCount = 0;
        int suffixSum = 0;

        for (int i = n - 1; i >= 0; --i)
        {
            distances[i] += suffixSum - suffixCount * i;
            if (boxes[i] == '1')
            {
                ++suffixCount;
                suffixSum += i;
            }
        }

        return distances;
    }
};
