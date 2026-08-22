class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        unordered_map<char,int> mp;
        int left =0,right=0;
        int maxlen =0;
        while(right<n){
            while(mp.find(s[right])!=mp.end()){
                mp[s[left]]--;
                if(mp[s[left]]==0) mp.erase(s[left]);
                left++;
            }
            maxlen = max(maxlen,right-left+1);
            mp[s[right]]++;
            right++;
        }
        return maxlen;
    }
};