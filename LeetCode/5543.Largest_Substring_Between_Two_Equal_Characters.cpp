class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        map<char,vector<int>> m;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            m[s[i]].push_back(i);
        }
        int maxo=-1;
        for(auto x:m)
        {
            if(x.second.size()>=2)
                maxo=max(maxo,abs(x.second[0]-x.second[x.second.size()-1])-1);
        }
        if(maxo<0)
            return -1;
        else
            return maxo;
    }
};