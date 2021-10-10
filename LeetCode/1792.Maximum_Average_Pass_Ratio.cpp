class Solution {
public:
    typedef pair<double,int> pdi;

    double calc(vector<int>cls){
        return 1.0*(cls[0]+1)/(cls[1]+1)-1.0*cls[0]/cls[1];
    }

    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        int n=classes.size();
        priority_queue<pdi> hp;
        for(int i=0;i<n;i++){
            hp.push(pdi(calc(classes[i]),i));
        }

        while(extraStudents--){
            auto temp=hp.top();
            hp.pop();
            int id=temp.second;
            classes[id][0]++;
            classes[id][1]++;
            hp.push(pdi(calc(classes[id]),id));
        }
        double avg=0;
        for(int i=0;i<n;i++){
            avg+=1.0*classes[i][0]/classes[i][1];
        }
        avg/=n;
        return avg;
    }
};