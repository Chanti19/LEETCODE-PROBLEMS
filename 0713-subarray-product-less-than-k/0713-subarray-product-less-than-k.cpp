class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n =nums.size();
        if(k<=1) return 0;
        int count=0;
        int left=0;
        long long p =1;
        for(int i=0;i<n;i++){
            p*=nums[i];
            while(p>=k){
                p/=nums[left++];
            }
            count+=i-left+1;
        }
        return count;
    }
};