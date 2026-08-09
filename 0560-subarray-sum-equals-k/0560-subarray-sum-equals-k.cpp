class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int  n = nums.size();
        vector<int>prefix(n,0);
        prefix[0] = nums[0];
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+nums[i];
        }
        unordered_map<int,int> mp;
        int ans=0;
        for(int r=0;r<n;r++){
            if(prefix[r]==k) ans++;
            int val = prefix[r]-k;
            if(mp.find(val)!=mp.end()) ans+=mp[val];
            if(mp.find(prefix[r])==mp.end()) mp[prefix[r]]=0;
            mp[prefix[r]]++;
        }
        return ans;
    }
};