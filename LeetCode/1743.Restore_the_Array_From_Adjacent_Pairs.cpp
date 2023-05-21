class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        vector<int> ans;
        map<int,int> m;
        map<int,vector<int>>graph;
        map<int,bool> check;
        for(auto x:adjacentPairs)
        {
            m[x[0]]++;
            m[x[1]]++;
            graph[x[0]].push_back(x[1]);
            graph[x[1]].push_back(x[0]);
        }
        int start=0;
        for(auto x:m)
        {
            if(x.second==1)
            {
                // cout<<"start mila  "<<start<<endl;
                start=x.first;
                break;
            }
        }
        ans.push_back(start);
        check[start]=true;
        queue<int> q;
        q.push(start);
        while(q.size()>0)
        {
            int temp=q.front();
            q.pop();
            for(auto x:graph[temp])
            {
                if(check[x]==false)
                {
                    ans.push_back(x);
                    q.push(x);
                    check[x]=true;
                }
            }
        }
        return ans;
    }
};