class Solution {
public:
    bool checkPalindromeFormation(string a, string b) {
        int n=a.size();
        int m=b.size();
        int flag=2;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=a[n-i-1])
            {
                flag--;
                break;
            }
        }
        for(int i=0;i<m;i++)
        {
            if(b[i]!=b[m-i-1])
            {
                flag--;
                break;
            }
        }
        if(flag!=0)
            return true;
        if(a[0]!=b[m-1]&&b[0]!=a[n-1])
            return false;
        else
            return true;
    }
};