class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n =nums.size();
        int maxcount =0,count =0;
        int left=0,right=0;
        while(right<n){
            if(nums[right]==0) count++;
            while(count>k){
                if(nums[left]==0) count--;
                left++;
            }
            maxcount =max(maxcount,right-left+1);
            right++;
        }
        return maxcount;
    }
};