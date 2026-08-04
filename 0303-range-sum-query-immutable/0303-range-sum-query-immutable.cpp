class NumArray {
public:
    vector<int> nums;
    NumArray(vector<int>& nums) {
        this->nums=nums;
    }
    
    int sumRange(int left, int right) {
        int n = nums.size();
        vector<int> prefix(n,0);
        prefix[0]=nums[0];
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+nums[i];
        }
        if(left==0) return prefix[right];
        else return prefix[right]-prefix[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */