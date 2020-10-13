class Solution {
public:
    int maxDepth(string s) {
        int count=0;
        int maxo=0;
        for(auto x:s)
        {
            if(x=='(')
                count++;
            else if(x==')')
                count--;
            else if(x>='0'&&x<='9')
            {
                maxo=max(maxo,count);
            }
        }
        return maxo;
    }
};