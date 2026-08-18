class Solution {
public:
    int countSubstrings(string s) {
        int n = s.length();
        int count =0;
        for(int i=0;i<n;i++){
            count+=ispal(s,i,i);
            count+=ispal(s,i,i+1);
        }
        return count;
    }
private:
    int ispal(string& s,int l,int r){
        int count=0;
        while(l>=0&&r<s.length()&&s[l]==s[r]){
            count++;
            l--;
            r++;
        }
        return count;
    }
};