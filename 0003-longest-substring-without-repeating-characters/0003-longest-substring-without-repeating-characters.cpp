class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int maxlen = 0;
        unordered_map<char,int> mp;
        int l=0,r=0;
        while(r<n){
            while(l<r&&mp.find(s[r])!=mp.end()){
                mp[s[l]]--;
                if(mp[s[l]]==0){
                    mp.erase(s[l]);
                }
                l++;
            }
            mp[s[r]]++;
            maxlen = max(maxlen,r-l+1);
            r++;
        }
        return maxlen;
    }
};