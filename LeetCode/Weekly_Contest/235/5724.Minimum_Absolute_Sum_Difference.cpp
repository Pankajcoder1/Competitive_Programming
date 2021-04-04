class Solution {
public:
    int minAbsoluteSumDiff(vector<int>& nums1, vector<int>& nums2) {
        int mod=1e9+7;
        int n=nums1.size();
        int sum=0;
        vector<int> diff(n,0);
        int maxo_diff=0,max_diff_pos=0;
        for(int i=0;i<n;i++){
            int temp=abs(nums1[i]-nums2[i]);
            diff[i]=temp;
            if(temp>maxo_diff){
                maxo_diff=temp;
                max_diff_pos=i;
            }
        }
        int ans_pos=0;
        for(int i=0;i<n;i++){
            if(i!=max_diff_pos){
                int temp=abs(nums1[i]-nums2[max_diff_pos]);
                if(temp<maxo_diff){
                    maxo_diff=temp;
                    ans_pos=i;
                }
            }
        }
        sum=0;
        for(int i=0;i<n;i++){
            if(i!=max_diff_pos){
                int temp=abs(nums1[i]-nums2[i]);
                temp%=mod;
                sum+=temp;
                sum%=mod;
            }
            else{
                int temp=abs(nums1[ans_pos]-nums2[i]);
                temp%=mod;
                sum+=temp;
                sum%=mod;
            }
        }
        return sum;
    }
};