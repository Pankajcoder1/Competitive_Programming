class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        map<int,int> m;
        int maxo=0;
        for(auto x:rectangles)
        {
            int mini=min(x[0],x[1]);
            maxo=max(maxo,mini);
            m[mini]++;
        }
        return m[maxo];
    }
};