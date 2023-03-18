typedef long long ll ;
const ll INF=1e18;
const ll mod1=1e9+7;
const ll mod2=998244353;

class Solution
{
public:
    int maximizeGreatness(vector<int> &nums)
    {
        int n=nums.size();
        vector<int> v1(n);
        vector<int> v2(n);
        int count=0;
        
        for(int i=0;i<n;i++){
            v1[i]=nums[i];
        }
        
        sort(v1.begin(),v1.end());
        v2 = v1;
         
        int pos=0;

        for(int i=0;i<n;i++){
            while(pos<n && v1[i] >=v2[pos]){
                pos++;
            }
            if(pos<n){
                count++;
                pos++;
            }
            else{
                break;
            }
        }
        return count;
        
    }
};
