class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        map<int,int> m;
        for(int i=lowLimit;i<=highLimit;i++)
        {
            int sum=0;
            int temp=i;
            while(temp)
            {
                sum+=temp%10;
                temp/=10;
            }
            m[sum]++;
        }
        int maxo=0;
        for(auto x:m)
        {
            maxo=max(maxo,x.second);
        }
        return maxo;
    }
};