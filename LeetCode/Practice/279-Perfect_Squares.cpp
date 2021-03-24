class Solution {
public:
    int numSquares(int n) {
        if(floor(sqrt(n))==ceil(sqrt(n)))
            return 1;
        while(n%4==0)
        {
            n/=4;
        }
        if(n%8==7)
            return 4;
        for(int i=1;i*i<=n;i++)
        {
            int temp=sqrt(n-(i*i));
            if((temp*temp)==(n-(i*i)))
                return 2;
        }
        return 3;
    }
};