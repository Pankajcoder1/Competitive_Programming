const int maxo=200006;


class Solution {
public:
    int countDifferentSubsequenceGCDs(vector<int>& nums) {
        int ans=0;
        vector<bool> check(maxo,false);
        for(auto x:nums)
            check[x]=true;
        for(int i=1;i<maxo;i++){
            int hcf=0;
            for(int j=i;j<maxo;j+=i){
                if(check[j]==true){
                    hcf=__gcd(hcf,j);
                }
            }
            if(hcf==i)
                ans++;
        }
        return ans;
    }
};