class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        int ml =0;
        unordered_map<int,int> mp;
        int left =0,right=0;
        while(right<n){
            mp[fruits[right]]++;
            while(mp.size()>2){
                mp[fruits[left]]--;
                if(mp[fruits[left]]==0){
                    mp.erase(fruits[left]);
                }
                left++;
            }
            ml=max(ml,right-left+1);
            right++;
        }
        return ml;
    }
};