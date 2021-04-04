class Solution {
public:
    string truncateSentence(string s, int k) {
        string st="";
        for(auto x:s){
            if(x==' '){
                k--;
                if(k==0)
                    return st;
                
            }
            st+=x;
        }
        return st;
    }
};