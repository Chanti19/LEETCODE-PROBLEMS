class Solution {
public:
    bool isSubsequence(string s, string t) {
        int slen = s.length();
        if(slen==0) return true;
        int tlen = t.length();
        int i=0,j=0;
        while(j<tlen){
            if(s[i]==t[j]){
                i++;
                if(i==slen) return true;
            }
            j++;
        }
        return false;
    }
};