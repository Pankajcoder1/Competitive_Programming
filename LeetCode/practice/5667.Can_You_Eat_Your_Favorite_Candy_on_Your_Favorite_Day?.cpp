using i64= long long ;
class Solution {
public:
    vector<bool> canEat(vector<int>& candiesCount, vector<vector<int>>& queries) {
        int n=candiesCount.size();
        vector<long long> psum(n+1,0);
        int m=queries.size();
        vector<bool> ans(m,false);
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=candiesCount[i];
            psum[i+1]=sum;
        }
        for(int i=0;i<m;i++)
        {
            i64 min_s = psum[queries[i][0]] + 1;
			i64 max_s = psum[queries[i][0] + 1];
			i64 day = queries[i][1];
			i64 cap = queries[i][2];
			i64 min_t = day + 1;
			i64 max_t = (day + 1) * cap;
			ans[i]=(min_s <= max_t && max_s >= min_t);
           
        }
        return ans;
    }
};