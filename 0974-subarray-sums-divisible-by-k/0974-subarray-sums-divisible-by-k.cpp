class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size(),count=0;
        vector<int> prefix(n,0);
        prefix[0] = nums[0];
        for(int i=1;i<n;i++){
            prefix[i] = prefix[i-1]+nums[i];
        }
        unordered_map<int,int> mp;
        mp[0]=1;
        for(int i=0;i<n;i++){
            int val = prefix[i]%k;
            if(val<0) val+=k;
            if(mp.find(val)!=mp.end()) count+=mp[val];
            if(mp.find(prefix[i]%k)==mp.end()) mp[prefix[i]%k]=0;
            mp[val]++;
        }
        return count;
    }
};