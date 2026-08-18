class Solution {
public:
    int countSubstrings(string s) {
        int n = s.length();
        int count =0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(ispal(s,i,j)) count++;
            }
        }
        return count;
    }
private:
    bool ispal(string& s,int l,int r){
        while(l<r){
            if(s[l]!=s[r]) return false;
            l++;
            r--;
        }
        return true;
    }
};