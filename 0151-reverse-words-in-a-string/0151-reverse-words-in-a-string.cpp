class Solution {
public:
    string reverseWords(string s) {
        if(s.size()==1) return s;
        vector<string> words;
        string word,res;
        stringstream ss(s);
        while(ss>>word){
            words.push_back(word);
        }
        for(int i=words.size()-1;i>=0;i--){
            res+=words[i];
            if(i!=0) res+=" ";
        }
        return res;
    }
};