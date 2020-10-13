class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        vector<int> v[n+1];
        map<int,int> m;
        for(int i=0;i<roads.size();i++)
        {
            int a=roads[i][0];
            int b=roads[i][1];
            m[a]++;
            m[b]++;
            v[a].push_back(b);
            v[b].push_back(a);
        }
        vector<pair<int,int>> check;
        for(auto x:m)
        {
            // cout<<x.first <<"occur "<<x.second<<endl;
            check.push_back({x.second,x.first});
        }
        if(check.size()==0)
            return 0;
        sort(check.begin(),check.end());
        int maxo=0;
        int ans=check[check.size()-1].first;
        maxo=max(maxo,ans);
        // cout<<"ans is "<<maxo<<endl;
        int a=check[check.size()-1].second;
        int temp=ans;
        for(int i=check.size()-2;i>=0;i--)
        {
            temp=ans+check[i].first;
            int b=check[i].second;
            // cout<<"in b "<<b<<" temp is "<<temp<<endl;
            for(auto x:v[b])
            {
                if(x==a)
                    temp--;
            }
            // cout<<"in b after "<<b<<" temp is "<<temp<<endl;
            maxo=max(maxo,temp);
        }
        return maxo;
    }
};