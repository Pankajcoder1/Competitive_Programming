class Solution {
public:
    int myAtoi(string str) {
        stringstream pk(str);
        int num=0;
        pk>>num;
        return num;
    }
};