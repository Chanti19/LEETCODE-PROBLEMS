class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n =nums.size();
        int counter = 0;
        int cand = INT_MIN;
        for(int i:nums){
            if(counter ==0){
                cand = i;
                counter++;
            }
            else if(cand==i) counter++;
            else if(cand!=i) counter--;
        }
        return cand;
    }
};