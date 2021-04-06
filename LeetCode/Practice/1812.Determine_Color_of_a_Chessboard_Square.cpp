class Solution {
public:
    bool squareIsWhite(string coordinates) {
        string s=coordinates;
        
        if((s[0]=='a'||s[0]=='c'||s[0]=='e'||s[0]=='g')){
            int d=s[1]-'0';
            if(d&1)
                return false;
            else
                return true;
        }
        else{
            int d=s[1]-'0';
            if(d&1)
                return true;
            else
                return false;
        }
    }
};