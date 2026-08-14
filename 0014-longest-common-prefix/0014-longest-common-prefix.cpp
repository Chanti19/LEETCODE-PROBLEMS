class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        string res="";
        sort(strs.begin(),strs.end());
        string f = strs.front();
        string l = strs.back();
        for(int i=0;i<min(f.length(),l.length());i++){
            if(f[i]!=l[i]) break;
            res.push_back(f[i]);
        }
        return res;
    }
};