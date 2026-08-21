class Solution {
public:
    bool isAnagram(string s, string t) {
        int n1 = s.length();
        int n2 = t.length();
        if(n1!=n2) return false;
        vector<int> fre(26,0);
        for(char ch :s){
            fre[ch-'a']++;
        }
        for(char ch:t){
            if(fre[ch-'a']>0) fre[ch-'a']--;
        }
        for(int i:fre){
            if(i>0) return false;
        }
        return true;
    }
};