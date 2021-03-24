class Solution {
public:
    int maximumScore(int a, int b, int c) {
        int maxo=max({a,b,c});
        if((2*maxo)>(a+b+c))
            return (a+b+c)-maxo;
        else
            return (a+b+c)/2;
    }
};