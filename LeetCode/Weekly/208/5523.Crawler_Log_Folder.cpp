class Solution {
public:
    int minOperations(vector<string>& logs) {
        int count=0;
        for(auto x:logs)
        {
            // cout<<x<<" ";
            if(count<=0)
                count=0;
            if(x=="../")
                count--;
            else if(x=="./")
                continue;
            else
                count++;
        }
        if(count>0)
            return count;
        else
            return 0;
    }
};