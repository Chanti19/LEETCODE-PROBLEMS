class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        int minsum = nums[0];
        int maxsum = nums[0];
        int tempmin = nums[0];
        int tempmax = nums[0];
        int arrsum = nums[0];
        for(int i=1;i<n;i++){
            arrsum+=nums[i];
            tempmin = min(tempmin+nums[i],nums[i]);
            minsum = min(minsum,tempmin);
            tempmax = max(tempmax+nums[i],nums[i]);
            maxsum = max(tempmax,maxsum);
        }
        if(arrsum == minsum) return maxsum;
        return max(maxsum,arrsum-minsum);
    }
};