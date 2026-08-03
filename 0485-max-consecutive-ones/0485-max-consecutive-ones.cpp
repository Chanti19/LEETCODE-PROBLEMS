class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n =nums.size();
        int count=0;
        int mcount=0;
        for(int i:nums){
            if(i==1){
                count++;
                mcount = max(count,mcount);
            }
            else count=0;
        }
        return mcount;
    }
};