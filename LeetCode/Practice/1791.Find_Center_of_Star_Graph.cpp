class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        map<int,int> m;
        int n=edges.size();
        for(int i=0;i<edges.size();i++){
            m[edges[i][0]]++;
            m[edges[i][1]]++;
        }
        for(auto x:m){
            if(x.second==(n)){
                return x.first;
            }
        }
        return 0;
    }
};