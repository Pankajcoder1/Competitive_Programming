/*
	 written by Pankaj Kumar.
	 country:-INDIA
	 Institute: National Institute of Technology, Uttarakhand
*/
class Solution {
    public int[] sortArrayByParityII(int[] nums) {
        int n=nums.length;
        int[] even=new int[n/2];
        int[] odd=new int[n/2];
        int i=0,j=0;
        for(int k=0;k<n;k++){
            if(nums[k]%2==1){
                odd[j++]=nums[k];
            }
            else{
                even[i++]=nums[k];
            }
        }
        i=0;
        j=0;
        for(int k=0;k<n;k++){
            if(k%2==1){
                nums[k]=odd[j++];
            }
            else{
                nums[k]=even[i++];
            }
        }
        return nums;
    }
}