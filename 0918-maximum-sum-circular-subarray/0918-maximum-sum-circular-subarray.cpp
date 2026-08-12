class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int  n = nums.size();
        int maxsum = nums[0];
        int minsum = nums[0];
        int tempmax = nums[0];
        int tempmin = nums[0];
        int sum=nums[0];
        for(int i=1;i<n;i++){
            sum+=nums[i];
            tempmin=min(tempmin+nums[i],nums[i]);
            minsum = min(minsum,tempmin);
            tempmax = max(tempmax+nums[i],nums[i]);
            maxsum = max(maxsum,tempmax);
        }
        if(maxsum<0) return maxsum;
        return max(maxsum,sum-minsum);
    }
};