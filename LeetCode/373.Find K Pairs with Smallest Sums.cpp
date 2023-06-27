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
    vector<vector<int>> kSmallestPairs(vector<int> &nums1, vector<int> &nums2, int k)
    {
        vector<vector<int>> ans;
        int possible = k;

        priority_queue<pair<int, pair<int, int>>> pq;

        for (int i = 0; i < nums1.size(); i++)
        {
            for (int j = 0; j < nums2.size(); j++)
            {
                int sum = nums1[i] + nums2[j];

                if (pq.size() < k)
                {
                    pq.push({sum, {nums1[i], nums2[j]}});
                }
                else if (sum < pq.top().first)
                {
                    pq.pop();
                    pq.push({sum, {nums1[i], nums2[j]}});
                }
                else if (sum > pq.top().first)
                {
                    break;
                }
            }
        }

        while (!pq.empty())
        {
            ans.push_back({pq.top().second.first, pq.top().second.second});
            pq.pop();
        }

        return ans;
    }
};