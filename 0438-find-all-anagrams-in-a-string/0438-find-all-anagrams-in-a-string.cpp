class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = s.length();
        int m = p.length();
        vector<int> res;
        if(n<m) return {};
        vector<int> freqP(26,0);
        for(char ch:p){
            freqP[ch-'a']++;
        }
        vector<int> freqS(26,0);
        for(int i=0;i<m;i++){
            freqS[s[i]-'a']++;
        }
        if(equal(freqP.begin(),freqP.end(),freqS.begin())) res.push_back(0);
        for(int i=m;i<n;i++){
            freqS[s[i]-'a']++;
            int left = i-m;
            freqS[s[left]-'a']--;
            if(equal(freqP.begin(),freqP.end(),freqS.begin())) res.push_back(left+1);
        }
        return res;
    }
};