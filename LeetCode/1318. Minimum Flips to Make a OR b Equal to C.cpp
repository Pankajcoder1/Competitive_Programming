/*
    written by Pankaj Kumar.
    country:-INDIA
*/
typedef long long ll ;
const ll INF=1e18;
const ll mod1=1e9+7;
const ll mod2=998244353;
//Add main code here

class Solution {
public:
    int minFlips(int a, int b, int c) {
        vector<int> bits_ab(32,0);
        int ans=0;

        for(int i=0;i<32;i++){
            if(a&(1<<i)){
                bits_ab[i]++;
            }
            if(b&(1<<i)){
                bits_ab[i]++;
            }
        }
        for(int i=0;i<32;i++){
            if(c&(1<<i)){
                if(bits_ab[i]==0){
                    ans++;
                }
            }
            else{
                if(bits_ab[i]){
                    ans+=bits_ab[i];
                }
            }
        }
        return ans;
    }
};