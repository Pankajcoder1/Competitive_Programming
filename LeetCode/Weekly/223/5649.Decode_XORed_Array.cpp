class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> v;
        v.push_back(first);
        int ans=first;
        for(auto x:encoded)
        {
            ans=ans^x;
            v.push_back(ans);
        }
        return v;
    }
};