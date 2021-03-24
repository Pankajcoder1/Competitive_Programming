class Solution {
public:
    bool isHappy(int n) {
        map<int,int> m;
        while(1)
        {
            if(n==1)
                return true;
            else if(m[n])
                return false;
            else
            {
                m[n]++;
                int temp=0;
                while(n)
                {
                    temp+=(n%10)*(n%10);
                    n/=10;
                }
                n=temp;
                // cout<<"n "<<n<<endl;
            }
        }
    }
};