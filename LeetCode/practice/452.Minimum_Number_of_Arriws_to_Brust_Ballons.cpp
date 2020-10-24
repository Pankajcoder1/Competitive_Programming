class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int count=0;
        long long min=LLONG_MIN;
        for(int i=0;i<points.size();i++){
            if(points[i][0]>min){
                min=points[i][1];
                count++;
            }
            else if(points[i][1]<min) min=points[i][1];
        }
        return count;
    }
};