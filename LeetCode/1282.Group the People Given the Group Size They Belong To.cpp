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
    vector<vector<int>> groupThePeople(vector<int> &groupSizes)
    {
        map<int,vector<int>> m;
        for(int i=0;i<groupSizes.size();i++){
            m[groupSizes[i]].push_back(i);
        }
        vector<vector<int>> ans;
        for(auto x:m){
            int grpSize=x.first;
            for(int i=0;i<x.second.size();i=i+grpSize){
                vector<int> temp;
                for(int j=i;j<i+grpSize;j++){
                    temp.push_back(x.second[j]);
                }
                ans.push_back(temp);
            }
        }
        return ans;
    }
};