class Solution {
public:
    bool isPalindrome(string s) {
        int  n = s.size();
        transform(s.begin(),s.end(),s.begin(),::tolower);
        int l=0,r=n-1;
        while(l<r){
            while(!isalnum(s[l])&&l<r) l++;
            while(!isalnum(s[r])&&l<r) r--;
            if(s[l]!=s[r]) return false;
            l++;
            r--;
        }
        return true;
    }
};