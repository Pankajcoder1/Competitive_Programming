class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        vector<int>ans(k,0);
        map<int,set<int>> m;
        for(auto x:logs){
            m[x[0]].insert(x[1]);
        }
        for(auto x:m){
            int temp=x.second.size();
            ans[temp-1]++;
        }
        return ans;
    }
};