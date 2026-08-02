class Solution {
public:
    int maxArea(vector<int>& height) {
        int n =height.size();
        int l=0,r=n-1,ma=0;
        while(l<r){
            int w = r-l;
            int h = min(height[l],height[r]);
            ma = max(ma,h*w);
            if(h==height[l]) l++;
            else r--;
        }
        return ma;
    }
};