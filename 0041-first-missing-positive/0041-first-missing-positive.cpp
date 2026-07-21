class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n =nums.size();
        unordered_map<int,int> mp;
        for(int i:nums){
            mp[i]++;
        }
        long long res = LONG_MIN;
        for(int i=1;i<=n;i++){
            if(mp[i]==0){
                res =i;
                break;
            }
        }
        if(res==LONG_MIN) return n+1;
        return res;
    }
};