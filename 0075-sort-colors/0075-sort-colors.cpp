class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int nums_zeros = 0;
        int nums_ones = 0;
        int nums_twos = 0;
        for(int i:nums){
            if(i==0) nums_zeros++;
            else if(i==1) nums_ones++;
            else nums_twos++;
        }
        for(int i=0;i<nums_zeros;i++) nums[i]=0;
        for(int i=nums_zeros;i<nums_zeros+nums_ones;i++) nums[i]=1;
        for(int i=nums_zeros+nums_ones;i<nums_zeros+nums_ones+nums_twos;i++) nums[i]=2;
    }
};