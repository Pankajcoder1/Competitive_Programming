class Solution {
public:
    int log2(int n){
        int res=1;
        while(n>0) {
            res*=2;
            n>>=1;
        }
        return res;
    }
    int concatenatedBinary(int n) {
        long long mod=pow(10,9)+7;
        long long num=0;
        for(int i=1;i<=n;i++){
            num=num*log2(i)+i;
            // cout<<"num is "<<num<<endl;
            num=num%mod;
        }
        return num;
    }
    
};