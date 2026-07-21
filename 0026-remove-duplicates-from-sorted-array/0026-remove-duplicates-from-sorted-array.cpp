class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int w =0;
        for(int r=1;r<n;r++){
            if(nums[r]!=nums[w]){
                w++;
                nums[w]=nums[r];
            }
        }
        return w+1;
    }
};