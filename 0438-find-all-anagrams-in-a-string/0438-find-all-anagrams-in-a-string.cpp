class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n1 =s.length();
        int n2 =p.length();
        if(n1<n2) return {};
        vector<int> freqS(26,0);
        vector<int> freqP(26,0);
        for(char ch:p) freqP[ch-'a']++;
        for(int i=0;i<n2;i++){
            freqS[s[i]-'a']++;
        }
        vector<int> res;
        if(equal(freqP.begin(),freqP.end(),freqS.begin())) res.push_back(0);
        //sliding window
        for(int i=n2;i<n1;i++){
            freqS[s[i]-'a']++;
            int left = i-n2;
            freqS[s[left]-'a']--;
            if(equal(freqP.begin(),freqP.end(),freqS.begin())) res.push_back(left+1);
        }
        return res;
    }
};