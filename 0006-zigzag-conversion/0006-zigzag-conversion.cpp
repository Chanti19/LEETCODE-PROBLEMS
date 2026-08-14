class Solution {
public:
    string convert(string s, int numRows) {
        int n = s.length();
        if(numRows==1) return s;
        vector<string> res(numRows);
        int row =0;
        int dir = 1;
        for(int i=0;i<n;i++){
            res[row].push_back(s[i]);
            if(dir==1) row++;
            else row--;
            if(row==0) dir =1;
            else if(row==numRows-1) dir =-1;
        }
        string res2 = "";
        for(string i:res){
            res2+=i;
        }
        return res2;
    }
};
