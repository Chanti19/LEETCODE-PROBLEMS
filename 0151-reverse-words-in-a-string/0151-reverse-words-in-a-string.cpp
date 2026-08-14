class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        reverse(s.begin(),s.end());
        string res = "";
        for(int i=0;i<n;i++){
            string word="";
            while(i<n&&s[i]!=' '){
                word.push_back(s[i++]);
            }
            reverse(word.begin(),word.end());
            if(word.length()>0) res+=" "+word;
        }
        return res.substr(1);
    }
};