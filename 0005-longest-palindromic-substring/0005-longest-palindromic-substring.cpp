class Solution {
public:
    string longestPalindrome(string s) {
        int n  = s.length();
        int st = 0,end =0;
        for(int i=0;i<n;i++){
            int odd = expand(s,i,i);
            int even = expand(s,i,i+1);
            int len = max(odd,even);
            if(len>(end-st)){
                st = i-(len-1)/2;
                end = i+len/2;
            }
        }
        return s.substr(st,end-st+1);
    }
private:
    int expand(string& s,int l,int r){
        while(l>=0&&r<s.length()&&s[l]==s[r]){
            l--;
            r++;
        }
        return r-l-1;
    }
};