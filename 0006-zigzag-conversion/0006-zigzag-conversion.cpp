class Solution {
public:
    string convert(string s, int numRows) {
        int n = s.size();
        if(numRows==1 || numRows>=n) return s;
        vector<string> arr(numRows);
        int row=0,dir =1;
        for(char i:s){
            arr[row]+=i;
            if(row==0) dir =1;
            else if(row==numRows-1) dir =-1;
            row+=dir;
        }
        string res="";
        for(string i:arr){
            res+=i;
        }
        return res;
    }
};