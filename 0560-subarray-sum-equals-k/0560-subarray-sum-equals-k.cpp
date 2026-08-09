class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size(),count=0;
        vector<int> psum(n,0);
        psum[0]=nums[0];
        for(int i=1;i<n;i++){
            psum[i]=psum[i-1]+nums[i];
        }
        unordered_map<int,int> mp;
        mp[0]=1;
        for(int i=0;i<n;i++){
            // if(psum[i]==k) count++;
            int val = psum[i]-k;
            if(mp.find(val)!=mp.end()) count+=mp[val];
            if(mp.find(psum[i])==mp.end()) mp[psum[i]]=0;
            mp[psum[i]]++;
        }
        return count;
    }
};