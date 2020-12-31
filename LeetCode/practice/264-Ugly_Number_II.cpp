class Solution {
public:
    int nthUglyNumber(int n) {
        int i2=0,i3=0,i5=0;
        int a=2,b=3,c=5;
        vector<int> v(n);
        v[0]=1;
        int num=1;
        while(num<n)
        {
            int mini=min({a,b,c});
            v[num]=mini;
            num++;
            if(mini==a)
            {
                i2++;
                a=2*v[i2];
            }
            if(mini==b)
            {
                i3++;
                b=3*v[i3];
            }
            if(mini==c){
                i5++;
                c=5*v[i5];
            }          
        }
        return v[n-1];
    }
};