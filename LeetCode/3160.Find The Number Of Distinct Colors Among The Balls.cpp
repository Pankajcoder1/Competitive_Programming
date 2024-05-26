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
	vector<int> queryResults(int limit, vector<vector<int>> &queries)
	{
		map<int, int> cnt, color;

		int n = queries.size();
		vector<int> ans(n);

		for (int i = 0; i < n; i++)
		{
			int x = queries[i][0];
			int y = queries[i][1];
			if (color.find(x) != color.end())
			{
				cnt[color[x]]--;
				if (cnt[color[x]] == 0)
					cnt.erase(color[x]);
			}

			color[x] = y;
			cnt[y]++;
			ans[i] = cnt.size();
		}

		return ans;
	}
};
