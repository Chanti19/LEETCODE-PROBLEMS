class Solution {
public:
    int countSubstrings(string s) {
        int n = s.length();
        int count = 0 ;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(ispalindrome(s,i,j)) count++;
            }
        }
        return count;
    }
private:
    bool ispalindrome(string str,int l,int r){
        while(l<r){
            if(str[l]!=str[r]) return false;
            l++;
            r--;
        }
        return true;
    }
};