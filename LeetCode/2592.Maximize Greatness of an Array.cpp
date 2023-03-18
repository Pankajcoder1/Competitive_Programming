/*
    written by Pankaj Kumar.
    country:-INDIA
*/
typedef long long ll ;
const ll INF=1e18;
const ll mod1=1e9+7;
const ll mod2=998244353;
//Add main code here

class Solution
{
public:
    int maximizeGreatness(vector<int> &nums)
    {
        int n=nums.size();
        vector<pair<int,int>> v1(n);
        vector<int> v2(n);
        int count=0;
        for(int i=0;i<n;i++){
            v1[i]={nums[i],i};
            v2[i]=nums[i];
        }
        sort(v2.begin(),v2.end());
        sort(v1.begin(),v1.end());
        int pos=0;

        for(int i=0;i<n;i++){
            while(pos<n && v1[i].first >= v2[pos]){
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
