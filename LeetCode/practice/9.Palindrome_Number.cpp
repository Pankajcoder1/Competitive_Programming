class Solution {
public:
    bool isPalindrome(int x) {
        int y=x;
        stack<int> s;
        if(x<0)
            return false;
        while(y)
        {
            s.push(y%10);
            y/=10;
        }
        while(!s.empty())
        {
            if(s.top()!=x%10)
                return false;
            s.pop();
            x/=10;
        }
        return true;
    }
};