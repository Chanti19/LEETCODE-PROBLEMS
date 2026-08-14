class Solution {
public:
    bool isSubsequence(string s, string t) {
        int slen = s.length();
        if(slen==0) return true;
        int tlen = t.length();
        int j=0;
        for(int i=0;i<tlen;i++){
            if(s[j]==t[i]){
                j++;
                if(j==slen) return true;
            }
        }
        return false;
    }
};