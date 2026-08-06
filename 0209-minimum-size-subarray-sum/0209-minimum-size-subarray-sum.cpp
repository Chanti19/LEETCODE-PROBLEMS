class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int minlen = INT_MAX;
        int left =0,right=0,sum=0;
        while(right<n){
            sum+=nums[right];
            while(sum>=target){
                minlen =min(minlen,right-left+1);
                sum-=nums[left];
                left++;
            }
            right++;
        }
        if(minlen==INT_MAX) return 0;
        return minlen;
    }
};