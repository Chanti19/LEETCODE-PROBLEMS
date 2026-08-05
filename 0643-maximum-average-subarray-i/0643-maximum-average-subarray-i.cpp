class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double mavg = 0;
        int sum = 0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        mavg = (double)sum/k;
        for(int i=k;i<n;i++){
            sum+=nums[i];
            sum-=nums[i-k];
            mavg = max(mavg,(double)sum/k);
        }
        return mavg;
    }
};