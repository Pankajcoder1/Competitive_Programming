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
    int minMaxDifference(int num)
    {
        vector<int> v;
        string s=to_string(num);
        for(int i=0;i<=9;i++){
            for(int j=0;j<=9;j++){
                string temp=to_string(num);
                for(int k=0;k<temp.size();k++){
                    if(temp[k]==i+'0'){
                        temp[k]=j+'0';
                    }
                }
                v.push_back(stoi(temp));
            }
        }
        sort(v.begin(),v.end());
        return v[v.size()-1]-v[0];
    }
};