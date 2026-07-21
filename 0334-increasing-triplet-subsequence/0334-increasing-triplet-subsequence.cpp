class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n=nums.size();
        long long first = LONG_MAX,second = LONG_MAX;
        for(int i=0;i<n;i++){
            if(nums[i]<=first){
                first=nums[i];
            }
            else if(nums[i]>first&&nums[i]<=second){
                second=nums[i];
            }
            else if(nums[i]>second){
                return true;
            }
        }
        return false;
    }
};