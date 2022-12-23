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
    bool isPossible(int n, vector<vector<int>> &edges)
    {
        vector<set<int>> graph(n + 1);
        vector<int> oddDegree;
        for (auto &edge : edges)
        {
            graph[edge[0]].insert(edge[1]);
            graph[edge[1]].insert(edge[0]);
        }
        for (int i = 1; i <= n; i++)
        {
            if (graph[i].size() % 2)
                oddDegree.push_back(i);
        }
        if(oddDegree.size()==0){
            return true;
        }
        else if(oddDegree.size()==2){
            int a=oddDegree[0],b=oddDegree[1];
            if(graph[a].find(b)==graph[a].end()){
                return true;
            }
            else{
                for(int i=1;i<=n;i++){
                    if(a!=i && b!=i && graph[a].find(i)==graph[a].end() && graph[b].find(i)==graph[b].end()){
                        return true;
                    }
                }
                return false;
            }
        }
        else if(oddDegree.size()==4){
            int a=oddDegree[0],b=oddDegree[1],c=oddDegree[2],d=oddDegree[3];
            // connecting a->b and c->d
            if(graph[a].find(b)==graph[a].end()&&graph[c].find(d)==graph[c].end()){
                return true;
            }
            // connecting a->c and b->d
            else if(graph[a].find(c)==graph[a].end()&&graph[b].find(d)==graph[b].end()){
                return true;
            }
            // connecting a->d and b->c
            else if(graph[a].find(d)==graph[a].end()&&graph[b].find(c)==graph[b].end()){
                return true;
            }
            else{
                return false;
            }
        }
        else{
            return false;
        }
    }
};