class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n = nums.size();
        int maxsum = INT_MIN;
        int minsum = INT_MAX;
        int tempmax = 0,tempmin = 0;
        for(int i:nums){
            tempmax = max(tempmax+i,i);
            tempmin = min(tempmin+i,i);
            maxsum = max(tempmax,maxsum);
            minsum = min(tempmin,minsum);
        }
        return max(maxsum,-(minsum));
    }
};