class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int n =nums.size();
        int maxprofit = 0;
        for(int i=0;i<n-1;i++){
            if(nums[i]<nums[i+1]){
                maxprofit+=nums[i+1]-nums[i];
            }
        }
        return maxprofit;
    }
};