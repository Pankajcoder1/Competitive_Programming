class NumArray {
public:
    int FenwickTree[100001]={0};
    int v[100001]={0};
    int n=100001;
    NumArray(vector<int>& nums) {
        n=nums.size();
        for(int i=0;i<n;i++)
        {
            update(i,nums[i]);
            v[i]=nums[i];
        }
    }
    
    void update(int index, int value)
    {
        int temp=v[index];
        v[index]=value;
        value=value-temp;
        index++;
        while(index<=n)
        {
            FenwickTree[index]+=value;
            index+=(index&(-index));
        }
    }
    
    int sum(int i)
    {
        int sum=0;
        while(i>0)
        {
            sum+=FenwickTree[i];
            i-=(i&(-i));
        }
        return sum;
    }
    int sumRange(int i, int j) 
    {
        int ans=sum(j+1)-sum(i);
        return ans;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(i,val);
 * int param_2 = obj->sumRange(i,j);
 */