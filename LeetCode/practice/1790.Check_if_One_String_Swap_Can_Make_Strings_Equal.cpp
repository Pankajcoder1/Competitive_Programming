class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        vector<int> pos;
        for(int i=0;i<s1.size();i++){
            if(s1[i]!=s2[i])
                pos.push_back(i);
        }
        if(pos.size()==0)
            return true;
        else if(pos.size()==2)
        {
            swap(s1[pos[0]],s1[pos[1]]);
            if(s1==s2)
                return true;
            else
                return false;
        }
        else
            return false;
    }
};