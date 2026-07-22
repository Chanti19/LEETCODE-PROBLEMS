class Solution {
public:
    bool isSubsequence(string s, string t) {
        int slength = s.length();
        int tlength = t.length();
        int i=0,j=0;
        while(j<tlength){
            if(s[i]==t[j]){
                i++;
            }
            j++;
        }
        return i==slength;
    }
};