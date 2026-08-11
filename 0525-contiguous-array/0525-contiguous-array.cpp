class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        int maxlen = 0;
        int prefixsum = 0;
        unordered_map<int,int> mp;
        mp[0]=-1;
        for(int i=0;i<n;i++){
            if(nums[i]==0) nums[i]=-1;
            prefixsum+=nums[i];
            int val = -prefixsum;
            if(mp.find(val)!=mp.end()){
                maxlen = max(maxlen,i-mp[val]);
            }
            else{
                mp[val] = i;
            }

        }
        return maxlen;
    }
};