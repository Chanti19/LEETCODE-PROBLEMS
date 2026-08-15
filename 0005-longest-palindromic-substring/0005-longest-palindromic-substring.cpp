class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        int maxlen = 0;
        string res = "";
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(maxlen<j-i+1&&expand(s,i,j)){
                    maxlen = j-i+1;
                    res = s.substr(i,j-i+1);
                }
            }
        }
        return res;
    }
private:
    bool expand(const string& s,int l,int r){
        while(l<r){
            if(s[l]!=s[r]) return false;
            l++;
            r--;
        }
        return true;
    }
};