class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n =nums.size();
        int r=0;
        for(int w=0;w<n;w++){
            if(nums[w]!=0){
                nums[r]=nums[w];
                r++;
            }
        }
        for(int i=r;i<n;i++){
            nums[i]=0;
        }
    }
};